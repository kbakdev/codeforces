#include<bits/stdc++.h>
using namespace std;
#define MAXN 200005
typedef long long ll;

int n, m, q, a[MAXN], st[4 * MAXN];
bool lazy[4 * MAXN];
pair<int, int> ranges[MAXN];

void propagate(int i, int l, int r) {
    if(lazy[i]) {
        st[i] = r - l + 1 - st[i];
        if(l != r) {
            lazy[2 * i] ^= 1;
            lazy[2 * i + 1] ^= 1;
        }
        lazy[i] = 0;
    }
}

void update(int i, int l, int r, int ul, int ur) {
    propagate(i, l, r);
    if(l > ur || r < ul) return;
    if(l >= ul && r <= ur) {
        lazy[i] ^= 1;
        propagate(i, l, r);
        return;
    }
    int mid = (l + r) / 2;
    update(2 * i, l, mid, ul, ur);
    update(2 * i + 1, mid + 1, r, ul, ur);
    st[i] = st[2 * i] + st[2 * i + 1];
}

int query(int i, int l, int r, int ql, int qr) {
        propagate(i, l, r);
        if(l > qr || r < ql) return 0;
        if(l >= ql && r <= qr) return st[i];
        int mid = (l + r) / 2;
        return query(2 * i, l, mid, ql, qr) + query(2 * i + 1, mid + 1, r, ql, qr);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> q;
    string s; cin >> s;
    for(int i = 1; i <= n; i++) a[i] = s[i - 1] - '0';
    for(int i = 1; i <= m; i++) cin >> ranges[i].first >> ranges[i].second;
    for(int i = 1; i <= n; i++) update(1, 1, n, i, i);
    while(q--) {
        int x; cin >> x;
        update(1, 1, n, x, x);
        ll ans = 0;
        for(int i = 1; i <= m; i++) {
            int l = ranges[i].first, r = ranges[i].second;
            int zeros = query(1, 1, n, l, x - 1);
            int ones = query(1, 1, n, x + 1, r);
            ans += min(zeros, ones);
                    cout << ans << "\n";
    }
    return 0;
    }
}