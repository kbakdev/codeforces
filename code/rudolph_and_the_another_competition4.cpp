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
        ll penalty = 0;
        bool timeLimitExceeded = false; // New variable to track time limit exceeding
        for (int j = 1; j <= m; ++j) {
            cin >> t[j].first;
            t[j].second = j;
            if (penalty + t[j].first > h) {
                t[j].first = h - penalty; // Adjust the time for the problem if it exceeds the time limit
                timeLimitExceeded = true; // Set flag if penalty exceeds time limit
            }
            penalty += t[j].first;
        }
        sort(t + 1, t + m + 1);
        for (int j = 1; j <= m && penalty > h; ++j) {
            penalty -= t[j].first;
        }
        for (int j = 1; j <= m && penalty + t[j].first <= h; ++j) {
            penalty += t[j].first;
            pq[i].push({penalty, t[j].second});
        }
        if (i == 1)
            scoreBoard.push_back({{-pq[i].size(), -penalty}, i});
        else
            scoreBoard.push_back({{pq[i].size(), timeLimitExceeded ? h + 1 : penalty}, i}); // Assign higher penalty if time limit exceeded
    }

    sort(scoreBoard.rbegin(), scoreBoard.rend());

    for (int i = 0; i < n; ++i) {
        if (n == 1) {
            cout << 1 << "\n";
            return;
        }
        if (scoreBoard[i].second == 1) {
            cout << i << "\n"; // Print Rudolf's place
            return;
        }
        // print all the data
        cout << scoreBoard[i].second << " " << scoreBoard[i].first.first << " " << scoreBoard[i].first.second << "\n";
        
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
