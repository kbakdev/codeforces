#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long q = (k-1)/(n-1);
        cout << k + q << "\n";
    }
    
    return 0;
}
