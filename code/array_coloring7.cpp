#include<iostream>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define is_odd(x) (x & 1)

int main() {
    fast;

    int t;
    cin >> t;

    while(t--) {
        int n, val, totalParity = 0; // 0 indicates even, 1 indicates odd
        cin >> n;

        while(n--) {
            cin >> val;
            totalParity ^= is_odd(val);  // determine the parity using bitwise operation
        }

        cout << (totalParity ? "NO" : "YES") << "\n";  // If totalParity is 1 (odd), print "NO"
    }

    return 0;
}
