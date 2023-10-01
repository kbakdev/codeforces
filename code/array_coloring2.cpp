#include<iostream>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast;

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int cem = 0, val;
        for(int i = 0; i < n; i++) {
            cin >> val;
            cem += val;
        }

        cout << (cem % 2 == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}
