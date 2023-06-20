#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int ones = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            ones++;
            a[i] = -1;
        }
        else {
            a[i] = 1;
        }
    }

    int curr_max = a[0], max_so_far = a[0];
    for (int i = 1; i < n; i++) {
        curr_max = max(a[i], curr_max + a[i]);
        max_so_far = max(max_so_far, curr_max);
    }

    cout << max_so_far + ones << endl;

    return 0;
}
