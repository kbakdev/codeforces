#include <bits/stdc++.h>
using namespace std;

#define MAXN 200010

struct node{
    int l, r, id;
    bool operator < (const node &a) const {
        return r > a.r;
    }
};

int bit[MAXN], ans[MAXN], tot[MAXN];
node a[MAXN];
vector<int>vec[MAXN];

void update(int x, int v){
    for(; x < MAXN; x += x&-x) bit[x] += v;
}

int query(int x){
    int sum = 0;
    for(; x; x -= x&-x) sum += bit[x];
    return sum;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T, n, m;
    cin >> T;
    while(T--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            cin >> a[i].l >> a[i].r;
            a[i].id = i;
            vec[i].clear();
        }
        sort(a + 1, a + n + 1);
        memset(bit, 0, sizeof(bit));
        memset(tot, 0, sizeof(tot));
        int L = 1;
        for(int R = m; R >= 1; R--){
            while(a[L].r == R) update(a[L].l, 1), L++;
            tot[R] = tot[R + 1] + query(R);
        }
        int mx = 0, id = 0;
        for(int i = 1; i <= m; i++){
            if(tot[i] > mx) mx = tot[i], id = i;
        }
        for(int i = 1; i <= n; i++){
            if(a[i].r < id) ans[a[i].id] = a[i].r;
            else ans[a[i].id] = max(a[i].r, id + tot[id] - 1);
        }
        cout << ans[1] - ans[2] << "\n";
    }
    return 0;
}
