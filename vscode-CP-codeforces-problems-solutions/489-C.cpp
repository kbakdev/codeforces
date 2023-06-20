#include<bits/stdc++.h>
using namespace std;


int main() {
    int m, s;
    cin >> m >> s;

    if (s == 0) {
        if (m == 1) {
            cout << "0 0" << endl;
        } else {
            cout << "-1 -1" << endl;
        }
        return 0;
    }

    if (s > 9 * m) {
        cout << "-1 -1" << endl;
        return 0;
    }

    string min_num = "";
    int sum = s;
    for (int i = 0; i < m; i++) {
        int digit = min(9, sum);
        min_num += to_string(digit);
        sum -= digit;
    }

    string max_num = "";
    sum = s;
    for (int i = 0; i < m; i++) {
        int digit = min(9, sum);
        max_num += to_string(digit);
        sum -= digit;
    }

    reverse(max_num.begin(), max_num.end());

    if (max_num[0] == '0') {
        max_num[0] = '1';
        for (int i = 1; i < m; i++) {
            if (max_num[i] != '0') {
                max_num[i]--;
                break;
            }
        }
    }

    cout << max_num << " " << min_num << endl;
}
