#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    vector<char> v;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        for (int i = 0; i < n-1; i++) {
            if (s[i] != s[i+1]) {
                v.push_back(s[i]);
            }

            if (find(v.begin(), v.end(), s[i]) != v.end()) {
                cout << "NO" << endl;
                break;
            }

            if (i == n-2) {
                cout << "YES" << endl;
            }
        }
    }
}