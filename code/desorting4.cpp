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
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) cin >> a[i];

        vector<ll> b(a);
        sort(b.begin(), b.end());

        if (a != b) {
            cout << 0 << "\n";
            continue;
        }

        ll minn = INT_MAX, ind;
        for (ll i = 0; i < n-1; i++)
            if(a[i + 1] - a[i] < minn) minn = a[i + 1] - a[i], ind = i;

        cout << (a[ind + 1] - a[ind]) / 2 + 1 << "\n";
    }

    return 0;
}
