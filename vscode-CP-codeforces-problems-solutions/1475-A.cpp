#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long n;

    cin >> t;

    while (t--) {
        cin >> n;
        if (n & (n - 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}