#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>

void solve() {
    ll n;
    cin >> n;
    vll v(n);
    bool even_exists = false;
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] % 2 == 0) {
            even_exists = true;
        }
    }
    if(even_exists) {
        cout << "YES\n";
    } else {
        if(is_sorted(v.begin(), v.end())) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
