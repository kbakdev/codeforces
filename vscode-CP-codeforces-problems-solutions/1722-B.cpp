#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string row1, row2;
        cin >> row1 >> row2;
        for(int i = 0; i < n; i++) {
            if(row1[i] == 'G' || row1[i] == 'B') row1[i] = 'X';
            if(row2[i] == 'G' || row2[i] == 'B') row2[i] = 'X';
        }
        if(row1 == row2)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}
