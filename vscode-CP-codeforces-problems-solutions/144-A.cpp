#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int maxIndex = max_element(a.begin(), a.end()) - a.begin();
    int minIndex = min_element(a.rbegin(), a.rend()) - a.rbegin();
    minIndex = n - 1 - minIndex;

    int ans = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) {
        ans--;
    }

    cout << ans;

    return 0;
}

