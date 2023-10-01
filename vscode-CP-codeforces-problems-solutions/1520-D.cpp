#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long ans = 0;
        map<int, int> cnt;
        for (int i = 0; i < n; i++) {
            a[i] -= i;
            ans += cnt[a[i]];
            cnt[a[i]]++;
        }

        cout << ans << '\n';
    }
    return 0;
}
