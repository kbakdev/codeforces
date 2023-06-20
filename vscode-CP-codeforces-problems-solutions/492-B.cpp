#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);
    int r;
    r = max(a[0], l - a[n - 1]) * 2;

    for (int i = 0; i < n - 1; i++) {
        r = max(r, a[i + 1] - a[i]);
    }

    cout << fixed << setprecision(10) << r / 2.0 << endl;
}