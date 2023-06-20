#include <iostream>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

bool isPrime(int n) {
    if(n < 2)
        return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main() {
    set<long long> t_primes;
    for(long long i = 2; i <= 1000000; i++) {
        if(isPrime(i))
            t_primes.insert(i*i);
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if(t_primes.count(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
