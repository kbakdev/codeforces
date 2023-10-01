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

        ll min_diff = INT_MAX, min_diff_index;
        bool is_sorted = true;
        for (ll i = 0; i < n-1; ++i) {
            if (a[i] > a[i+1]) {
                is_sorted = false;
                break;
            }
            ll diff = a[i+1] - a[i];
            if (diff < min_diff) {
                min_diff = diff;
                min_diff_index = i;
            }
        }

        if (!is_sorted) {
            cout << 0 << "\n";
            continue;
        }

        ll ops = (a[min_diff_index + 1] - a[min_diff_index]) / 2 + 1;
        cout << ops << "\n";
    }

    return 0;
}
