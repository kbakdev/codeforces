#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> prefix(n-1);
        for(int i = 0; i < n-1; ++i)
            cin >> prefix[i];

        int max_prefix_sum = prefix[0];
        int prefix_sum = prefix[0];

        for(int i = 1; i < n-1; ++i){
            prefix_sum += prefix[i];
            max_prefix_sum = max(max_prefix_sum, prefix[i]);
        }

        int permutation_sum = n*(n+1)/2;

        if(permutation_sum < prefix_sum || (permutation_sum - prefix_sum) < max_prefix_sum)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
}
