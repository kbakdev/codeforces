#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define min(a, b) a <= b ? a : b
#define max(a, b) ((a) > (b) ? (a) : (b))

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        int i = 0;

        while (i < n)
        {
            int c = b;
            while (i < n && c < a)
            {
                c += v[i];
                i++;
            }
            if (i != n)
                i--;
            ans += min(max(0, c - 1), a);
            b = max(0, c - a);
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}
