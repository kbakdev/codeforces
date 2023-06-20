#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), res(n);
    unordered_set<int> s;

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    for(int i = n - 1; i >= 0; --i) {
        s.insert(a[i]);
        res[i] = s.size();
    }

    while(m--) {
        int l;
        cin >> l;
        cout << res[l - 1] << "\n";
    }
    return 0;
}
