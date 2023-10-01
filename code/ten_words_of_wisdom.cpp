#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> responses(n);
        for (int i = 0; i < n; i++) {
            cin >> responses[i].first >> responses[i].second;
        }

        pair<int, int> winner = {51, -1};
        for (int i = 0; i < n; i++) {
            if (responses[i].first <= 10 && responses[i].second > winner.second) {
                winner = responses[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (responses[i] == winner) {
                cout << i + 1 << '\n';
                break;
            }
        }
    }

    return 0;
}
