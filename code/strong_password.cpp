#include<bits/stdc++.h>
using namespace std;

const int N = 3e5+10;
vector<int> pos[10];
int n, m, dp[N][2][2][2], vis[N][2][2][2];
string l, r, s;

bool ok(int idx, int a, int b, int c) {
    if(idx == m+1)
        return 1;
    if(vis[idx][a][b][c])
        return dp[idx][a][b][c];
    vis[idx][a][b][c] = 1;
    int lb = a ? l[idx] - '0' : 0;
    int rb = b ? r[idx] - '0' : 9;
    for(int i = lb; i <= rb; ++i) {
        auto it = lower_bound(pos[i].begin(), pos[i].end(), (c ? pos[s[idx]-'0'].back() : -1) + 1);
        if(it != pos[i].end() && ok(idx+1, a&(i==lb), b&(i==rb), 1))
            return dp[idx][a][b][c] = 1;
    }
    if(!c && ok(idx+1, a, b, 0))
        return dp[idx][a][b][c] = 1;
    return dp[idx][a][b][c] = 0;
}

void solve() {
    cin >> s >> m >> l >> r;
    s = " " + s; l = " " + l; r = " " + r;
    for(int i = 0; i < 10; ++i)
        pos[i].clear();
    for(int i = 1; i < s.size(); ++i)
        pos[s[i]-'0'].push_back(i);
    memset(vis, 0, sizeof vis);
    cout << (ok(1, 1, 1, 0) ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
