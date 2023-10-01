#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int min_diff = INT_MAX;
        int min_diff_index = -1;
        bool already_unsorted = false;

        for (int i = 0; i < n-1; ++i) {
            if (a[i] > a[i+1]) {
                cout << 0 << "\n";
                already_unsorted = true;
                break;
            }
            int diff = a[i+1] - a[i];
            if (diff < min_diff) {
                min_diff = diff;
                min_diff_index = i;
            }
        }

        if (!already_unsorted) {
            int ops = INT_MAX;
            if (min_diff != 0) {
                ops = 1 + (a[min_diff_index+1] - a[min_diff_index]) / min_diff;
            }
            cout << ops << "\n";
        }
    }

    return 0;
}

