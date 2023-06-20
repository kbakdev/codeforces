#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int result = 0;
    for(int i = 0; i < m; ++i) {
        if(a[i] < 1) {
            result -= a[i];
        } else {
            break;
        }
    }
    cout << result << endl;
    return 0;
}
