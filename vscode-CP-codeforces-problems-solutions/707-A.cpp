#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    char pixel;
    bool isColored = false;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> pixel;
            if(pixel == 'C' || pixel == 'M' || pixel == 'Y') {
                isColored = true;
            }
        }
    }

    if(isColored) {
        cout << "#Color";
    }
    else {
        cout << "#Black&White";
    }

    return 0;
}
