#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    set<char> s = {'c', 'o', 'd', 'e', 'f', 'r', 'c', 'e', 's'};

    while (t--) {
        char c;
        cin >> c;

        if (s.count(c))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
