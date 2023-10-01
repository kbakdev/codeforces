#include<bits/stdc++.h>
#define ll long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll m = (n * (n - 1)) /2;
        map < ll, ll > mp;
        ll a[m];
        for(int i = 0; i < m ; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll r = n - 1;
        vector <ll> v;
        for(auto it: mp)
        {
            if(r == it.second) {
                v.push_back(it.first);
                r--;
            } else{
                ll x = r, p = 0;
                while(x > 0 && it.second != p) {
                    p += (x);
                    v.push_back(it.first);
                    x--;
                }
                r = x;
            }
        }
        for(auto it: v) {
            cout << it << ' ';
        }

        cout << endl;

    }
    return 0;
}