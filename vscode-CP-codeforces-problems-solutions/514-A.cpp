#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string x;
    cin >> x;
    
    for(int i = (x[0] == '9') ? 1 : 0; i < x.size(); i++) {
        if(x[i] > '4')
            x[i] = '9' - x[i] + '0';
    }
    
    cout << x;
    
    return 0;
}
