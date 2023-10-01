#include<iostream>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t, n, val, oddCount;
    cin >> t;

    while(t--) {
        cin >> n;
        oddCount = 0;  // Initialize counter for odd numbers

        for(int i = 0; i < n; i++) {
            cin >> val;
            oddCount += (val & 1);  // Increment if the number is odd
        }

        cout << (oddCount & 1 ? "NO" : "YES") << "\n";  // Check parity of odd count
    }

    return 0;
}
