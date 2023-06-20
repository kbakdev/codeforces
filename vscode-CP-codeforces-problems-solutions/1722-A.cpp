#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;

    while(t--) {
        cin >> n;
        cin >> s;

        if (n != 5) {
            cout << "NO" << endl;
        } else {
            if (s.find("T") != string::npos && s.find("i") != string::npos && s.find("m") != string::npos && s.find("u") != string::npos && s.find("r") != string::npos) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }


    return 0;
}