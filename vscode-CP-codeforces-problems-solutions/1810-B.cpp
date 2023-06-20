#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        for(int k = 2; ; ++k) {
            long long x = (1LL << k) - 1;
            if(n % x == 0) {
                cout << n / x << "\n";
                break;
            }
        }
    }
    return 0;
}
