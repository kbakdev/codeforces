#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        int div = 0, sum = 0, one = 0;
        
        long long n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;

            if (a == 1)
            {
                one++;
                sum++;
            }
            else
            {
                sum += 2;
            }
        }

        if (sum % 2 == 0)
        {
            div = sum / 2;

            if (div % 2 == 0 || one > 0)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}


