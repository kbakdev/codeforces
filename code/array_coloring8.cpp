#include<iostream>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t;
    cin >> t;

    while(t--) {
        int n, val, parity = 0;  // using parity directly to store whether sum is odd/even
        cin >> n;

        while(n--) {
            cin >> val;
            parity ^= (val & 1);  // using bitwise operation to update parity
        }

        cout << (parity ? "NO" : "YES") << "\n";
    }

    return 0;
}
