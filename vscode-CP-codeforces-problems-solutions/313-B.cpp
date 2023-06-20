#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    int n = s.size();
    vector<int> ps(n, 0);
    for(int i = 1; i < n; i++) {
        ps[i] = ps[i - 1] + (s[i] == s[i - 1]);
    }
    
    int m;
    cin >> m;
    while(m--) {
        int l, r;
        cin >> l >> r;
        cout << ps[r - 1] - ps[l - 1] << "\n";
    }
    
    return 0;
}
