#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string L, R;
    cin >> L >> R;
    int n = L.size();
    int m = R.size();
    if(n < m){
        for(int i=0;i<m-n;i++) L = "0" + L;
    } else if(m < n){
        for(int i=0;i<n-m;i++) R = R + "0";
    }
    n = max(n, m);
    vector<int> dp(n+1, -1);
    dp[0] = 0;
    for(int i=0;i<n;i++){
        int l = L[i] - '0';
        int r = R[i] - '0';
        if(dp[i] == -1){
            if(l == r) dp[i+1] = l;
            else dp[i+1] = max(l, r-1);
        } else {
            dp[i+1] = max({dp[i+1], dp[i]*10+l, dp[i]*10+9});
        }
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans += abs((dp[i+1]/10 - dp[i])*9);
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
