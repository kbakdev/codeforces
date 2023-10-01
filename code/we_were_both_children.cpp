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
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j+=i) {
                v[j]+=count[i];
            }
        }
        for(int i = 2; i <= n; i++)
        {
            v[i] = max(v[i], v[i-1]);
        }
        cout << v[n] << "\n";
    }
    return 0;
}
