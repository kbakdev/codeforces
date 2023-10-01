#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1), prefix(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // delete elements on indexes defined by a[i], and iterate it in the loop for k times
        // the answer is the value on 1st index, because it's the only one that's left
        for (int i = 0; i < k; i++) {
            for (int j = 1; j <= n; j++) {
                prefix[max(1, j - a[j])]++;
                prefix[min(n, j + a[j] + 1)]--;
            }
            for (int j = 1; j <= n; j++) {
                prefix[j] += prefix[j - 1];
                a[j] = prefix[j];
                prefix[j] = 0;
            }
        }

        cout << a[1] << "\n";
    }
    return 0;
}
