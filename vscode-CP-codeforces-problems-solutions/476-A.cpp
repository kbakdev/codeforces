#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int min_steps = (n + 1) / 2;
    int result = ((min_steps + m - 1) / m) * m;

    if (result > n) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
