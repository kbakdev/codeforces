#include<bits/stdc++.h>

#define ll long long 

using namespace std;

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string n; 
        cin >> n;
        reverse(n.begin(), n.end());
        int j = 0;
        for(int i = 0; i < n.size(); i++) 
        {
            if(n[i] >= '5')
            {
                int pos = i + 1;
                while (pos < n.size() && n[pos] == '9') 
                {
                    n[pos] = '0';
                    pos++;
                }
                
                if (pos == n.size()) 
                {
                    n.push_back('1');
                } 
                else 
                {
                    n[pos]++;
                }

                for(int k = i; k >= j; k--) 
                {
                    n[k] = '0';
                }
                j = i + 1;
            }
        }
        reverse(n.begin(), n.end());
        cout << n << endl;
    }
    return 0;
}
