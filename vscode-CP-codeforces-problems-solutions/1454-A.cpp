#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << (i+1)%n + 1 << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
