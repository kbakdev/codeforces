#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    if(n == 0)
        cout << 1 << '\n';
    else {
        int rem = n % 4;
        if(rem == 1)
            cout << 8 << '\n';
        else if(rem == 2)
            cout << 4 << '\n';
        else if(rem == 3)
            cout << 2 << '\n';
        else
            cout << 6 << '\n';
    }
    
    return 0;
}
