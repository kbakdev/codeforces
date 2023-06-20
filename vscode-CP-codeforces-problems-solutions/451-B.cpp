#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = 0, j = n - 1;
    while(i < n - 1 && a[i] < a[i + 1]) {
        i++;
    }

    while(j > 0 && a[j] > a[j - 1]) {
        j--;
    }

    if (i == n - 1) {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    } else {
        reverse(a + i, a + j + 1);
        bool flag = true;
        for(int k = 0; k < n - 1; k++) {
            if (a[k] > a[k + 1]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "yes" << endl;
            cout << i + 1 << " " << j + 1 << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}