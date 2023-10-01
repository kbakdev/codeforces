#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> b(n * (n - 1) / 2);
        map<ll, ll> mp;
        for(ll i = 0; i < b.size(); i++) {
            cin >> b[i];
            mp[b[i]]++;
        }
        
        vector<ll> a;
        a.push_back(b[0]); // the smallest element in b is the smallest in a
        
        for(ll i = 1; i < n; i++) {
            // the current smallest value in a is a[i-1]
            ll cur_smallest = a[i-1];
            
            // its count in b determines the next smallest element
            ll cnt = mp[cur_smallest];
            
            // next element in a is b[cnt]
            a.push_back(b[cnt]);
            
            // decrease the counts of the current and next smallest values in b
            for(ll j = 0; j < i; j++) {
                mp[cur_smallest]--;
                mp[a[j]]--;
            }
        }
        
        // print the array a
        for(ll val : a) {
            cout << val << ' ';
        }
        cout << '\n';
    }
    return 0;
}
