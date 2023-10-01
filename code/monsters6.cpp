#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int numElement; cin >> numElement;
    int k; cin >> k;
    
    vector<int> count(k, 0);
    vector<vector<int>> positions(k);
    
    for(int i = 0; i < numElement; i++)
    {
        int val; cin >> val;
        val %= k;
        count[val]++;
        positions[val].push_back(i + 1);
    }
    
    for(int i = 0; i < count[0]; i++)
    {
        cout << positions[0][i] << ' ';
    }

    for(int i = k - 1; i > 0; i--)
    {
        for(int j = 0; j < count[i]; j++)
        {
            cout << positions[i][j] << ' ';
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
