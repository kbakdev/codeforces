#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        string keyboard, s;
        cin >> keyboard >> s;

        map<char, int> key_pos;
        for(int i = 0; i < 26; i++) {
            key_pos[keyboard[i]] = i;
        }

        int time = key_pos[s[0]];
        for(int i = 1; i < s.length(); i++) {
            time += abs(key_pos[s[i]] - key_pos[s[i-1]]);
        }

        cout << time << "\n";
    }

    return 0;
}
