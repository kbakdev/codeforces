#include<iostream>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t;
    cin >> t;

    while(t--) {
        int n, val, parity = 0;  // 0 for even, 1 for odd
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> val;
            parity ^= (val & 1);  // XOR with the least significant bit of val
        }

        cout << (parity ? "NO" : "YES") << endl;  // If parity is 1 (odd), print "NO"
    }

    return 0;
}
