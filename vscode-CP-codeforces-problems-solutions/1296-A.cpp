#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int odd = 0, even = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if (sum % 2 == 1 || (even && odd)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
