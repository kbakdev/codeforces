#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

const int N = 200005;
const int MOD = 1000003;
const int sz = 1e3 + 1;
using ll = long long;
ll dp[sz][sz];

int main() {
    fast;
    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int odd = 0, even = 0, cem = 0;

        for(const auto& val : arr) {
            cem += val;
            if(val % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        if(cem % 2 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
