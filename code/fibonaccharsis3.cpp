#include <iostream>
#include <vector>
#define int long long
using namespace std;

vector<pair<int, int>> vpr(901);

void precompute_fibonacci() {
    vpr[1] = make_pair(1, 0);
    vpr[2] = make_pair(0, 1);
    for (int i = 3; i < 901; ++i) {
        vpr[i].first = vpr[i - 2].first + vpr[i - 1].first;
        vpr[i].second = vpr[i - 2].second + vpr[i - 1].second;
    }
}

int32_t main() {
    int t;
    cin >> t; // Number of test cases

    precompute_fibonacci();

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k >= 901) {
            cout << 0 << endl;
            continue;
        }

        pair<int, int> val = vpr[k];
        int result = 0;
        if (val.second != 0) {
            int start = (n % val.second) ? ((n / val.second) + 1) : (n / val.second);
            int end = min(n / val.first, val.second ? (n / val.second) : n);
            for (int i = start; i <= end; ++i) {
                int temp = (n - val.first * i);
                if (temp % val.second == 0) {
                    ++result;
                }
            }
        } else if (n % val.first == 0) {
            result = 1;
        }

        cout << result << endl;
    }
}
