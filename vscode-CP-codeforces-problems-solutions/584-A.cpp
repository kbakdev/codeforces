#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t;
    cin >> n >> t;

    if (n >= 1 && n <= 100 && t >= 2 && t <= 10) {
        if (n == 1 && t == 10) {
            cout << -1 << endl;
        } else {
            if (t == 10) {
                n--;
            }
            cout << t;
            for(int i = 1; i < n; i++) {
                cout << 0;
            }
            cout << endl;
        }
    } else {
        cout << -1 << endl;
    }
}