#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> a(1+n+1,0);

        for (int i = 1; i<=n; i++) cin >> a[i];
        ll ans = 0;

        for (int i = 1; i <= n; i++) ans = max(ans, a[i]);
        for (int i = 1; i <= n; i++) {
            ll res = a[i];
            for (int j = i + 1; j <= min(n,(ll)i+256); j++) {
                res ^= a[j];
                ans = max(ans, res);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}