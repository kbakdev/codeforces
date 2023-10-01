#include<iostream>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t;
    cin >> t;

    while(t--) {
        int n, val;
        bool isOdd = false;  // Use this to toggle based on each value's parity

        cin >> n;
        while(n--) {
            cin >> val;
            if(val & 1) {
                isOdd = !isOdd;
            }
        }

        cout << (isOdd ? "NO" : "YES") << "\n";
    }

    return 0;
}
