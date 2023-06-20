#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<pair<int, int>> swaps;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            bool found = false;
            for (int j = i + 1; j < n; j++) {
                if (s[j] == s[i]) {
                    swap(s[j], t[i]);
                    swaps.push_back({j, i});
                    found = true;
                    break;
                }
            }
            if (!found) {
                for (int j = i + 1; j < n; j++) {
                    if (t[j] == s[i]) {
                        swap(s[j], t[j]);
                        swaps.push_back({j, j});
                        swap(s[j], t[i]);
                        swaps.push_back({j, i});
                        break;
                    }
                }
            }
        }
    }
    if (s != t) {
        cout << -1 << "\n";
    } else {
        cout << swaps.size() << "\n";
        for (auto pr : swaps) {
            cout << pr.first + 1 << " " << pr.second + 1 << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
