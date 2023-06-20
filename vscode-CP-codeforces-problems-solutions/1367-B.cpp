#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long n;
    vector<int> a;

    cin >> t;

    while (t--) {
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }
        }

        if (even != odd) {
            cout << -1 << endl;
        } else {
            cout << even << endl;
        }

        a.clear();
    }
}