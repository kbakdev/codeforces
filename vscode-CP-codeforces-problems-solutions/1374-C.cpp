#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> s;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                ans++;
            } else {
                ans--;
            }
            if(ans < 0) {
                ans = 0;
            }
        }

        cout << ans << endl;
    }
}