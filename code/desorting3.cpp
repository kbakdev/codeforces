#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        bool bul = false;
        for (ll i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                cout << 0 << "\n";
                bul = 1;
                break;
            }
        }
        if (bul == false) {
            ll minn = INT_MAX;
            ll ind;
            for (ll i = 0; i < n-1; i++) {
                if(a[i + 1] - a[i] < minn) {
                    minn = a[i + 1] - a[i];
                    ind = i;
                }
            }

            ll ans;
            ans = (a[ind + 1] - a[ind]) / 2 + 1;
            cout << ans << "\n";
        }
    }

    return 0;
}
