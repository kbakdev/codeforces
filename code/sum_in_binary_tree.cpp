#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;

    ll sum = 0;
    while(n) {
        sum += n;
        n = n / 2;
    }
    cout << sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    
    while(t--)
        solve();

    return 0;
}