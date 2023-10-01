#include<bits/stdc++.h>

#define ll long long 

using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n; cin >> n;
        reverse(n.begin(), n.end());
        n += '0';
        int j = 0;
        for(int i = 0; i < n.size(); i++) {
            if(n[i] >= '5')
            {
                n[i+1]++;
                for(int k = i; k >= j; k--) {
                    n[i] = '0';
                }
                j = i;
            }
        }
        reverse(n.begin(), n.end());
        int st = 0;
        if(n[0] == 0)
        {
            st++;
        }
        for(st; st < n.size(); st++)
        {
            cout << n[st];
        }
        cout << endl;
    }
    return 0;
}