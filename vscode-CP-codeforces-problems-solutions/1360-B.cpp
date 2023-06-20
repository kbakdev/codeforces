#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        sort(s.begin(), s.end());

        int min_difference = INT_MAX;
        for (int i = 1; i < n; i++) {
            min_difference = min(min_difference, s[i] - s[i - 1]);
        }

        cout << min_difference << "\n";
    }

    return 0;
}
