#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    string ans;

    for (int i = 0; i < n; ++i) {
        s[i] = tolower(s[i]);
    }

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    if (s.length() == 26) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}