#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int height = 0;
    int cubes = 0;

    while(cubes <= n) {
        height++;
        cubes += (height*(height+1))/2;
    }

    cout << height-1 << "\n";

    return 0;
}
