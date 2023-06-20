#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    int substracted_array[n];
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());
    int colors = n / 2;

    for (int i = 0; i < colors; i++) {
        substracted_array[i] = a[n - i - 1] - a[i];
    }

    int sum = 0;
    for (int i = 0; i < colors; i++) {
        sum += substracted_array[i];
    }

    cout << sum << endl;
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
