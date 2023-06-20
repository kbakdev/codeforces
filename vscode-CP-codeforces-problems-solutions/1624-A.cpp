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
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int min = a[0], max = a[0], min_index = 0, max_index = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] < min) {
                min = a[i];
                min_index = i;
            }
            if (a[i] > max) {
                max = a[i];
                max_index = i;
            }
        }

        if (min_index > max_index)
            swap(min_index, max_index);

        int ans = max - min;
        cout << ans << endl;
    }

    return 0;
}
