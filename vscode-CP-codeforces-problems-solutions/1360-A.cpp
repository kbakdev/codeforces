#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int maxSide = max(max(a, b), 2 * min(a, b));
        cout << maxSide * maxSide << "\n";
    }

    return 0;
}
