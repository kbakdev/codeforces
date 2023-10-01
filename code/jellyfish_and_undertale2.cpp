#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> v;
        v.reserve(n);

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());

        long long ans = 0;
        int i = 0;

        while (i < n)
        {
            int c = b;
            while (i < n && c < a)
            {
                c += v[i++];
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
