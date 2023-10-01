#include <bits/stdc++.h>

using namespace std;

// declare function main,
int main()
{
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        // for every test case, there will be a string of length 3
        string s;
        cin >> s;
        // if s = abc, acb, bac, print YES
        if (s == "abc" || s == "acb" || s == "bac" || s == "cba")
        {
            cout << "YES" << endl;
        }
        // if s = bca, cba, print NO
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}