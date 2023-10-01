#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back

void solve() {
    ll n, m, i, j, k;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++) cin >> v[i];
    vll odd,even;
    vll new_arr;
    for(i=0;i<n;i++) {
        cin >> v[i];
        vll odd,even;
        vll new_arr;
        for(i=0;i<n;i++) {
            if(v[i]&1)
            odd.pb(v[i]);
            else
            even.pb(v[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        ll odd_p=0,even_p=0;
        for(i=0;i<n;i++)
        {
            if(v[i]&1)
            {
                new_arr.pb(odd[odd_p]);
                ++odd_p;
            }
            else
            {
                new_arr.pb(even[even_p]);
                ++even_p;
            }
        }
        if(is_sorted(new_arr.begin(),new_arr.end()))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
    return 0;
}