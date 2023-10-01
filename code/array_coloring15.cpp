#include<iostream>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t, n, val, result;
    cin >> t;

    while(t--) {
        cin >> n;
        result = 0;  // Reset for each test case

        for(int i = 0; i < n; i++) {
            cin >> val;
            result ^= (val & 1);  // XOR the least significant bit
        }

        cout << (result ? "NO" : "YES") << "\n";  // Check the result
    }

    return 0;
}
