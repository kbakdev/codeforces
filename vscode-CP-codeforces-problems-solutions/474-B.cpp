#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> worms(n+1);
    worms[0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> worms[i];
        worms[i] += worms[i-1];
    }

    int m;
    cin >> m;
    vector<int> juicy(m);
    for (int i = 0; i < m; ++i) {
        cin >> juicy[i];
    }

    for (int i = 0; i < m; ++i) {
        cout << lower_bound(worms.begin(), worms.end(), juicy[i]) - worms.begin() << '\n';
    }

    return 0;
}
