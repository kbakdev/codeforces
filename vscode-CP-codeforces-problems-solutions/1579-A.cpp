#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int a = count(s.begin(), s.end(), 'A');
    int b = count(s.begin(), s.end(), 'B');
    int c = count(s.begin(), s.end(), 'C');

    if(b == a + c) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}
