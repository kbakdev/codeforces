#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define maxn 200010
 
int arr[maxn];
int dp[maxn][2];
 
int solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[1][0] = arr[1];
    dp[1][1] = arr[1];
    int maximum_charge = arr[1];
 
    for (int i = 2; i <= n; i++) {
        dp[i][0] = max({dp[i-1][0], dp[i-1][1], 0LL});
        dp[i][1] = arr[i] + max(dp[i-1][0], i > 2 ? dp[i-2][1] : 0LL);
        maximum_charge = max({maximum_charge, dp[i][0], dp[i][1]});
    }
    return maximum_charge;
}
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}