#include <iostream>
#include <vector>
#include <list>
using namespace std;

void solve()
{
    int numElement; cin >> numElement;
    int k; cin >> k;

    vector<list<int>> moduloBuckets(k);

    for(int i = 0; i < numElement; i++)
    {
        int val; cin >> val;
        val %= k;
        moduloBuckets[val].push_back(i + 1);
    }

    for(auto &bucket : moduloBuckets[0]) 
    {
        cout << bucket << ' ';
    }

    for(int i = k-1; i > 0; i--)
    {
        for(auto &bucket : moduloBuckets[i])
        {
            cout << bucket << ' ';
        }
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
