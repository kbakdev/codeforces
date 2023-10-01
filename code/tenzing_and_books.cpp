#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
        int n, x;
        cin >> n >> x;
        int arr[n],brr[n],crr[n];
        for (int i = 1; i <= n; i++) cin >> arr[i];
        for (int i = 1; i <= n; i++) cin >> brr[i];
        for (int i = 1; i <= n; i++) cin >> crr[i];
        long long ans=0;
        for(int i =0; i<n;i++) {
            if(arr[i]&x==arr[i])ans|=arr[i];
            if(brr[i]&x==brr[i])ans|=brr[i];
            if(crr[i]&x==crr[i])ans|=crr[i];
        }
            
        if (ans==x) cout << "YES\n";
        else cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}