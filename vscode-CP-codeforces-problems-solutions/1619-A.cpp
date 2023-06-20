#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int len = s.length();
        if(len % 2 == 1) {
            cout << "NO\n";
        } else {
            if(s.substr(0, len/2) == s.substr(len/2, len/2))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    
    return 0;
}
