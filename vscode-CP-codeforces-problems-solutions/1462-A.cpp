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
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int start = 0, end = n - 1;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                a[i] = b[start++];
            } else {
                a[i] = b[end--];
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
