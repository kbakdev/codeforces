#include<iostream>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t;
    cin >> t;

    while(t--) {
        int n, val, oddCount = 0;  // We'll count the number of odd numbers
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> val;
            oddCount += val & 1;  // Increment the count if the number is odd
        }

        cout << (oddCount & 1 ? "NO" : "YES") << "\n";  // Check if oddCount is odd
    }

    return 0;
}
