#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<pll, ll> participant;
const int MAXN = 2e5 + 5;

int n, m, h;
pll t[MAXN];

vector<participant> scoreBoard;
priority_queue<pll, vector<pll>, greater<pll>> pq[MAXN];

void solveTest() {
    cin >> n >> m >> h;

    scoreBoard.clear();
    for (int i = 1; i <= n; ++i) {
        while (!pq[i].empty())
            pq[i].pop();
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> t[j].first;
            t[j].second = j;
        }
        sort(t + 1, t + m + 1);
        ll penalty = 0;
        for (int j = 1; j <= m && penalty + t[j].first <= h; ++j) {
            penalty += t[j].first;
            pq[i].push({penalty, t[j].second});
        }
        if (i == 1) 
            scoreBoard.push_back({{-pq[i].size(), -penalty}, i});
        else 
            scoreBoard.push_back({{pq[i].size(), penalty}, i});
    }

    sort(scoreBoard.rbegin(), scoreBoard.rend());


    for (int i = 0; i < n; ++i) {
        if (n == 1) {
            cout << 1 << "\n";
            return;
        }
        if (scoreBoard[i].second == 1) {
            cout << i << "\n";
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while (T--)
        solveTest();
    return 0;
}
