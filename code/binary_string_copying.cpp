#include <bits/stdc++.h>
using namespace std;

int t, n, m;
string s;
vector<pair<int, int>> op;

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> m;
        cin >> s;
        op = vector<pair<int, int>>(m);
        for (int i = 0; i < m; i++) {
            cin >> op[i].first >> op[i].second;
            op[i].first--; op[i].second--;
        }
        set<string> results;
        for (int i = 0; i < m; i++) {
            string copy_s = s;
            int ones = 0, zeros = 0;
            for (int j = op[i].first; j <= op[i].second; j++) {
                if (copy_s[j] == '1') ones++;
                else zeros++;
            }
            for (int j = op[i].first; j <= op[i].second; j++) {
                if (zeros > 0) {
                    copy_s[j] = '0';
                    zeros--;
                } else {
                    copy_s[j] = '1';
                }
            }
            results.insert(copy_s);
        }
        cout << results.size() << '\n';
    }
    return 0;
}
