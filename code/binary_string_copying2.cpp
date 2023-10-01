#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        vector<pair<int, int>> ranges(m);
        for (int i = 0; i < m; ++i) {
            cin >> ranges[i].first >> ranges[i].second;
            ranges[i].first--;
        }

        set<string> distinctStrings;
        for (const auto& range : ranges) {
            string copy_s = s;
            sort(copy_s.begin() + range.first, copy_s.begin() + range.second);
            distinctStrings.insert(copy_s);
        }

        cout << distinctStrings.size() << "\n";
    }

    return 0;
}
