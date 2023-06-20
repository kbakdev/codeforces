#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        vector<int> s(4);
        for(int i=0; i<4; i++)
            cin >> s[i];

        int first_winner = max(s[0], s[1]);
        int second_winner = max(s[2], s[3]);

        sort(s.begin(), s.end());

        if((first_winner > s[1] && second_winner > s[1]) || (first_winner > s[2] && second_winner > s[2]))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
