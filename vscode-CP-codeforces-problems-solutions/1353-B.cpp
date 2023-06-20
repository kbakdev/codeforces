#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    
    for (int i = 0; i < k; ++i) {
        if (a[i] < b[i]) {
            a[i] = b[i];
        } else {
            break;
        }
    }

    int sum = accumulate(a.begin(), a.end(), 0);
    cout << sum << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
