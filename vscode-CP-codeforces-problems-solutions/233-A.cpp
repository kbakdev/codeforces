
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << -1;
        return 0;
    }

    if (n % 2 == 1) {
        cout << -1;
        return 0;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    for (int i = 0; i < n - 1; i++) {
        swap(a[i], a[i + 1]);
        i++;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}