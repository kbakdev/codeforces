#include<iostream>
using namespace std;
int main() {
    long long n, k, t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        if (n % 2 == k % 2 && n >= k * k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}