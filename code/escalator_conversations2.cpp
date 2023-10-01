#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        int count = 0, hi;
        for(int i=0; i<n; i++) {
            cin >> hi;
            int diff = abs(H - hi);
            if(diff % k == 0 && 1 <= diff / k && diff / k <= m - 1) {
                count++;
            }
        }
        cout << count << '\n';
    }

    return 0;
}
