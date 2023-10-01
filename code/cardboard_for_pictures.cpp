#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        ll n, c;
        cin >> n >> c;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        sort(v.begin(), v.end());
        ll left = 0, right = 1e9 + 10;
        while(right-left > 1){
            ll mid = (left + right) / 2;
            ll total = 0;
            for(ll i=0;i<n;i++){
                total += (v[i]+2*mid)*(v[i]+2*mid);
                if(total > c) break;
            }
            if(total <= c) left = mid;
            else right = mid;
        }
        cout << left << '\n';
    }
    return 0;
}
