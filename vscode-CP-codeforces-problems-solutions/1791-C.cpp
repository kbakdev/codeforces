#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        string s;
        int a[n];
        cin >> s;
        for(int i = 0; i < n; i++) {
            a[i] = s[i] - '0';
        }
        while((a[0] == 0 && a[n-1] == 1) || (a[0] == 1 && a[n-1] == 0)) {
            a[0] = a[1];
            a[n-1] = a[n-2];
            for (int i = 0; i < n-2; i++) {
                a[i] = a[i+1];
            }

            n -= 2;
        }

        cout << n << "\n";

    }
    
    return 0;
}
