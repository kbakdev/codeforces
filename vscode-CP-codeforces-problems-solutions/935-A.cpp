#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    if (n <= 3) {
        cout << 1 << endl;
    } else {
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}