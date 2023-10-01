#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    map<string, string> dict;
    for (int i = 0; i < m; i++) {
        string first, second;
        cin >> first >> second;
        if (second.size() < first.size()) {
            dict[first] = second;
        } else {
            dict[first] = first;
        }
    }

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        cout << dict[word];
        if(i != n-1) {
            cout << " ";
        }
    }
    cout << "\n";
    return 0;
}
