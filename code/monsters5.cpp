#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int numElement; cin >> numElement;
    int k; cin >> k;

    vector<vector<int>> buckets(k);

    for(int i = 0; i < numElement; i++)
    {
        int val; cin >> val;
        val %= k;
        buckets[val].push_back(i + 1);
    }

    for(auto &index : buckets[0])
    {
        cout << index << ' ';
    }

    for(int i = k - 1; i > 0; i--)
    {
        for(auto &index : buckets[i])
        {
            cout << index << ' ';
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
