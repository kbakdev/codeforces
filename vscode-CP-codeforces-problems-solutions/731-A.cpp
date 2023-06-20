#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    char current = 'a';
    for (char c : s) {
        int diff = abs(c - current);
        ans += min(diff, 26 - diff);
        current = c;
    }
    cout << ans << endl;
    return 0;
}
