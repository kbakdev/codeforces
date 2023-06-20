#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k, g;
        cin >> n >> k >> g;
        ll round = (g + 1) / 2;
        ll rem = (k * g) % n;
        ll q = (k * g) / n;
        ll ans = 0;
        if(q >= round){
            if(rem >= round){
                ans = (n - rem) * g;
            }else{
                ans = rem * g;
            }
        }else{
            ll take = min(n, g - 1);
            if(rem >= take){
                ans = (n - rem) * g;
            }else{
                ans = rem * g + take - rem;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
