#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    bool isNegativeOrZero = false;
    int subsets = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            isNegativeOrZero = false;
            sum += a[i];
        } else if (a[i] < 0) {
            sum += abs(a[i]);
            if (!isNegativeOrZero) {
                subsets++;
                isNegativeOrZero = true;
            }
        }
    }

    cout << sum << " " << subsets << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
