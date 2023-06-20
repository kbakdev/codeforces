#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    bool isNegativeOrZero = false;
    int subsets = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            isNegativeOrZero = false;
        }

        if (a[i] <= 0) {
            if (a[i] == 0) {
                continue;
            }
            if (!isNegativeOrZero) {
                subsets++;
            }
            isNegativeOrZero = true;
            a[i] *= -1;
        }
    }

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    cout << sum << " " << subsets << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
