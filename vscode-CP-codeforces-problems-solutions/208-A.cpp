#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.find("WUB") != string::npos) {
        while (s.find("WUB") != string::npos) {
            s.replace(s.find("WUB"), 3, " ");
        }

        while (s[0] == ' ') {
            s.erase(0, 1);
        }

        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == ' ' && s[i - 1] == ' ') {
                s.erase(i, 1);
                i--;
            }
        }
    }

    cout << s << endl;
    return 0;
}