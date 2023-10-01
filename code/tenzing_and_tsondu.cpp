#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, m;
    cin >> n >> m;
    multiset<ll, greater<ll>> a, b;
    for(int i = 0; i < n; i++) {
        ll tmp; cin >> tmp;
        a.insert(tmp);
    }
    for(int i = 0; i < m; i++) {
        ll tmp; cin >> tmp;
        b.insert(tmp);
    }

    while(true) {
        if(a.empty() && b.empty()) {
            cout << "Draw\n";
            return;
        }
        else if(a.empty()) {
            cout << "Tenzing\n";
            return;
        }
        else if(b.empty()) {
            cout << "Tsondu\n";
            return;
        }

        if(*a.begin() > *b.begin()) {
            ll remainingPower = *a.begin() - *b.begin();
            a.erase(a.begin());
            b.erase(b.begin());
            if(remainingPower > 0) {
                a.insert(remainingPower);
            }
        } else {
            ll remainingPower = *b.begin() - *a.begin();
            b.erase(b.begin());
            a.erase(a.begin());
            if(remainingPower > 0) {
                b.insert(remainingPower);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
