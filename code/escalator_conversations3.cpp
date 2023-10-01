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
        int count = 0;
        for(int i=0; i<n; i++) {
            int height;
            cin >> height;
            int diff = abs(H - height);
            if(diff % k == 0 && 1 <= diff / k && diff / k <= m - 1) {
                count++;
            }
        }
        cout << count << '\n';
    }

    return 0;
}
