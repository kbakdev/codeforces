#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> l(n);
    vector<int> cnt(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        cnt[l[i]]++;
    }
    for (int i = 1; i < n; i++)
        cnt[i] += cnt[i-1];
    bool flag = true;
    for (int i = 0; i < n; i++)
        if (cnt[i] > i+1)
            flag = false;
    cout << (flag ? "YES" : "NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
