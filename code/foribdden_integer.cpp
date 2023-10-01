#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> ans;

    // Try to use the largest possible values first, excluding x
    for (int i = k; i > 0 && n > 0; --i) {
        if (i != x) {
            while (n - i >= 0) {
                n -= i;
                ans.push_back(i);
            }
        }
    }

    // If we can't fill n with allowed numbers.
    if (n != 0) {
        cout << "NO" << "\n";
        return;
    }

    // If we can fill n with allowed numbers.
    cout << "YES" << "\n";
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
