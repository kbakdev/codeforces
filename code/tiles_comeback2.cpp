#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for(long long i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;
    while(test_cases--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        loop(n) {
            cin >> a[i];
        }

        ll last = n - 1;
        ll cnt = 0;
        loop(n) {
            if(a[i] == a[0]) cnt++;
            if(cnt == k){
                last = i;
                break;
            }
        }
        if(cnt < k){
            cout << "NO\n";
            continue;
        }
        if(a[0] == a[n - 1]){
            cout << "YES\n";
            continue;
        }
        cnt = 0;
        for(int i = n - 1; i > last; i--) {
            if(a[i] == a[n - 1]) cnt++;
        }

        if(cnt >= k){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
