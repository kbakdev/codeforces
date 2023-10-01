#include<iostream>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t;
    cin >> t;

    while(t--) {
        int n, val, oddCount = 0;  // Initialize a counter for odd numbers
        cin >> n;

        while(n--) {
            cin >> val;
            oddCount += val & 1;  // Increment the counter if the number is odd
        }

        // If oddCount is even, the sum is even. If oddCount is odd, the sum is odd.
        cout << (oddCount & 1 ? "NO" : "YES") << "\n";
    }

    return 0;
}
