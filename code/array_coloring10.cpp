#include<iostream>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t;
    cin >> t;

    while(t--) {
        int n, val, total = 0;  
        cin >> n;

        while(n--) {
            cin >> val;
            total += (val & 1);  // This will add 1 for odd numbers and 0 for even numbers
        }

        // If the total is odd, then the sum was odd
        cout << (total & 1 ? "NO" : "YES") << "\n";  
    }

    return 0;
}
