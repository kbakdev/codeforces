#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> solved(26, false);
        int balloons = 0;
        for(int i = 0; i < n; i++) {
            if(solved[s[i]-'A']) 
                balloons += 1;
            else {
                solved[s[i]-'A'] = true;
                balloons += 2;
            }
        }
        cout << balloons << '\n';
    }
    return 0;
}
