#include <iostream>
#include <vector>

using namespace std;

int countBits(int n)
{
    int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m + 1);
    for (int &val : a)
    {
        cin >> val;
    }

    int f = 0;
    int target = a[m];

    for (int i = 0; i < m; i++)
    {
        int differingBits = countBits(a[i] ^ target);

        if (differingBits <= k)
        {
            f++;
        }
    }

    cout << f << endl;

    return 0;
}
