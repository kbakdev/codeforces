#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = n / 2020;
        int b = n % 2020;
        if(b <= a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}
