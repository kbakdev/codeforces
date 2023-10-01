#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

const int maxn = 2e5 + 5;
const double pi = acos(-1.0);

int n;
pair<double, double> p[maxn];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) {
            double x, y;
            cin >> x >> y;
            p[i] = make_pair(atan2(y, x), i);
        }
        sort(p + 1, p + n + 1);
        for(int i = n + 1; i <= 2 * n; i++) {
            p[i] = make_pair(p[i - n].first + 2.0 * pi, p[i - n].second);
        }
        int l = 1;
        int ans = 0;
        for(int r = 1; r <= 2 * n; r++) {
            while(p[r].first - p[l].first > pi / 4.0) {
                l++;
            }
            ans += r - l;
        }
        cout << ans / 2 << "\n";
    }
    return 0;
}
