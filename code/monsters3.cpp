#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparePair(pair<int,int> p1, pair<int,int> p2){
    return p1.first > p2.first;
}

void solve()
{
    int numElement; cin >> numElement;
    int k; cin >> k;

    vector<pair<int,int>> v;
    for(int i = 0; i < numElement; i++)
    {
        int val; cin >> val;
        val %= k;
        if(val == 0)
        {
            cout << i + 1 << ' ';
        }
        else
        {
            v.push_back({val, i + 1});
        }
    }

    stable_sort(v.begin(), v.end(), comparePair);

    for(auto i : v)
    {
        cout << i.second << ' ';
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        solve();
    }
    return 0;
}
