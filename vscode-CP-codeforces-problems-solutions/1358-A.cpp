#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int total_cells = n * m;
        int lanterns = (total_cells + 1) / 2;
        cout << lanterns << "\n";
    }

    return 0;
}