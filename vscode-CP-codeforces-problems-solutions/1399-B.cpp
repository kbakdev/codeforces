#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        long long min_a = 1e9+7, min_b = 1e9+7;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            min_a = min(min_a, a[i]);
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
            min_b = min(min_b, b[i]);
        }
        long long moves = 0;
        for(int i = 0; i < n; i++) {
            moves += max(a[i] - min_a, b[i] - min_b);
        }
        cout << moves << "\n";
    }
    return 0;
}
