#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t, n, val;
    bool isOddSum;

    for(cin >> t; t--; cout << (isOddSum ? "NO\n" : "YES\n")) {
        cin >> n;
        isOddSum = false;
        while(n--) {
            cin >> val;
            isOddSum ^= val & 1;
        }
    }

    return 0;
}
