#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,e;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> count(n+1,0), v(n+1,0);
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            if (e <= n)
            {
                count[e]++;
            }
        }
        for (int i = n; i > 0; i--)
        {
            v[i] += count[i];
            for (int j = 2*i; j <= n; j += i) {
                v[j] = max(v[j], v[i]);
            }
        }
        cout << *max_element(v.begin(), v.end()) << "\n";
    }
    return 0;
}
