#include <bits/stdc++.h>
using namespace std;

int main() {
    char shift;
    string s, keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./", ans = "";
    cin >> shift >> s;
    for(char c: s){
        int pos = keyboard.find(c);
        if(shift == 'R')
            ans += keyboard[pos-1];
        else
            ans += keyboard[pos+1];
    }
    cout << ans << '\n';
    return 0;
}
