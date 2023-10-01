#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MAXN 200100

vector<int> a(MAXN), first(MAXN), last(MAXN), prefix(MAXN);

void solve() {
    int n;
    cin >> n;
    fill(first.begin(), first.end(), -1);
    fill(last.begin(), last.end(), -1);
    fill(prefix.begin(), prefix.begin() + n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (first[a[i]] == -1) first[a[i]] = i;
        last[a[i]] = i;
        prefix[i] = prefix[i - 1] + (first[a[i]] == i);
    }
    int ans = n;
    for (int i = 1; i <= n; ++i) {
        if (i == last[a[i]]) {
            ans = min(ans, i - prefix[i]);
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
