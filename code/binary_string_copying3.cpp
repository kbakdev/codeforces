#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        vector<int> zero_prefix(n+1, 0), one_prefix(n+1, 0);
        for(int i=0; i<n; i++) {
            zero_prefix[i+1] = zero_prefix[i] + (s[i] == '0');
            one_prefix[i+1] = one_prefix[i] + (s[i] == '1');
        }

        set<pair<int,int>> operations;
        for(int i=0; i<m; i++) {
            int l, r;
            cin >> l >> r;
            operations.insert({zero_prefix[r] - zero_prefix[l-1], one_prefix[r] - one_prefix[l-1]});
        }

        if (operations.size() == 1) {
            cout << 1 << "\n";
            continue;
        }
        
        cout << operations.size()-1 << "\n";
    }

    return 0;
}
