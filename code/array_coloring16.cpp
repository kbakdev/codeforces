#include<iostream>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t, n, val;
    bool isOddSum;

    cin >> t;
    while(t--) {
        cin >> n;
        isOddSum = false;  // Reset for each test case

        for(int i = 0; i < n; i++) {
            cin >> val;
            isOddSum ^= (val & 1);  // Toggle the flag if the number is odd
        }

        cout << (isOddSum ? "NO" : "YES") << "\n";  // Output result
    }

    return 0;
}
