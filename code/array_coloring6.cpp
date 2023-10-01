#include<iostream>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t;
    cin >> t;

    while(t--) {
        int n, val, totalParity = 0; // 0 indicates even, 1 indicates odd
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> val;
            totalParity ^= (val & 1);  // determine the parity using bitwise operation
        }

        cout << (totalParity ? "NO" : "YES") << endl;  // If totalParity is 1 (odd), print "NO"
    }

    return 0;
}
