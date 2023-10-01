#include <iostream>

using namespace std;

using lli = long long int;

lli pairs(lli n)
{
    return (n * (n - 1)) / 2;
}

int main()
{
    lli n, m;
    cin >> n >> m;

    lli a = n / m;
    lli b = n % m;
    lli min_pairs = pairs(a) * (m - b) + pairs(a + 1) * b;
    lli max_pairs = pairs(n - m + 1);

    cout << min_pairs << " " << max_pairs << endl;

    return 0;
}
