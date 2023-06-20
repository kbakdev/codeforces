#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;

    cin >> n >> t;

    vector <int> a(n-1);

    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    int i = 0;

    while (i < t-1) {
        i += a[i];
    }

    if (i == t-1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}