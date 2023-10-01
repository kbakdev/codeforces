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

        // check if it's already not sorted
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
            // try to make a[min_diff_index] > a[min_diff_index+1]
            int ops = 0;
            while (a[min_diff_index] <= a[min_diff_index+1]) {
                for (int i = 0; i <= min_diff_index; ++i) {
                    a[i]++;
                }
                for (int i = min_diff_index+1; i < n; ++i) {
                    a[i]--;
                }
                ops++;
            }

            cout << ops << "\n";
        }
    }

    return 0;
}
