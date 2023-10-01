#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>

void solve() {
    ll n;
    cin >> n;
    vll v(n), sorted_v(n);
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
        sorted_v[i] = v[i];
    }
    sort(sorted_v.begin(), sorted_v.end());
    for(ll i = 0; i < n; i++) {
        if(v[i] != sorted_v[i] && v[i] % 2 != sorted_v[i] % 2) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
