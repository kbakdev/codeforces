#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = n+1; i < m; i++) {
        if (isPrime(i)) {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (isPrime(m)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
