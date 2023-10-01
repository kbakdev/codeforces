#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        a[0] = 2;
        a[n-1] = 3;
        a[n/2] = 1;

        for (ll i = 1, counter = 4; i < n-1; i++) {
            if(i != n/2) {
                a[i] = counter++;
            }
        }

        for (const auto& element : a) {
            cout << element << " ";
        }
        cout << "\n";
    }

    return 0;
}
