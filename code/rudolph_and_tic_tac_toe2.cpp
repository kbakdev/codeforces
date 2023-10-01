#include <iostream>
#include <string>
using namespace std;

char winner(const string& a1, const string& a2, const string& a3) {
    for (int i = 0; i < 3; i++){
        if (a1[i] == a2[i] && a1[i] == a3[i]) {
            return a1[i];
        }
    }

    string arr[3] = {a1, a2, a3};
    for (const auto& row : arr) {
        if (row[0] == row[1] && row[0] == row[2]) {
            return row[0];
        }
    }

    if ((a1[0] == a2[1] && a1[0] == a3[2]) || (a3[0] == a2[1] && a3[0] == a1[2])) {
        return a2[1];
    }

    return '.';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        char c = winner(a1, a2, a3);

        if (c == '.') {
            cout << "DRAW" << endl;
        } else {
            cout << c << endl;
        }
    }

    return 0;
}
