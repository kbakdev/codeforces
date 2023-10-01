#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> arr;
    vector<int> ar;
    arr.reserve(100000);
    ar.reserve(100000);

    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        arr.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ar.clear();
        for (int i = 1; i < n; i++) {
            ar.push_back(abs(arr[i] - arr[i-1]));
        }
        sort(ar.begin(), ar.end());
        int sum = accumulate(ar.begin(), ar.begin() + n - k, 0);
        cout << sum << "\n";
    }

    return 0;
}
