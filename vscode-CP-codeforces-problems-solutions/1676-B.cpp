#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int minCandy = *min_element(a.begin(), a.end());
        long long candiesToEat = 0;
        for(int i = 0; i < n; i++) {
            candiesToEat += a[i] - minCandy;
        }
        cout << candiesToEat << '\n';
    }
    return 0;
}
