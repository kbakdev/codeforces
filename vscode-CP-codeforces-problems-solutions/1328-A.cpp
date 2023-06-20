using namespace std;
#include<bits/stdc++.h>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ans = 0;
        cin >> a >> b;
        if (a % b == 0)
            cout << ans << endl;
        else
        {
            ans = b - (a % b);
            cout << ans << endl;
        }
    }
    return 0;
}