#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> s(5, 0);
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s[x]++;
    }

    int taxis = s[4] + s[3] + s[2] / 2;
    s[1] = max(0, s[1] - s[3]);
    
    if(s[2] % 2 == 1) {
        taxis++;
        s[1] = max(0, s[1] - 2);
    }

    if(s[1] > 0) {
        taxis += (s[1] + 3) / 4;
    }

    cout << taxis << endl;

    return 0;
}

