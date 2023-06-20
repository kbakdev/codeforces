#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        int cnt = 0;
        for (int i = 1; i <= 9; ++i) {
            long long num = i;
            while (num <= n) {
                ++cnt;
                num = num * 10 + i;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
