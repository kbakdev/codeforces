#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int idx1 = s.find("AB"), idx2;
    if (idx1 != -1) {
        idx2 = s.find("BA", idx1 + 2);
        if (idx2 != -1) {
            cout << "YES\n";
            return 0;
        }
    }

    idx1 = s.find("BA");
    if (idx1 != -1) {
        idx2 = s.find("AB", idx1 + 2);
        if (idx2 != -1) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}
