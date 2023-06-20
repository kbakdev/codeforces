#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string x;
        cin >> x;
        int digit = x[0] - '0';
        int len = x.size();
        int total = (digit - 1) * 10;
        total += (len * (len + 1)) / 2;
        cout << total << "\n";
    }
    return 0;
}
