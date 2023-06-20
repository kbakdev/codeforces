#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> uniqueElements;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            uniqueElements.insert(a[i]);
        }
        if(uniqueElements.size() < n)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
    return 0;
}
