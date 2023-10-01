
#include <iostream>
#include <vector>
#include <array>
#define int long long
using namespace std;

vector<array<int, 2>> vpr(901);

void precompute_fibonacci() {
    array<int, 2> prev_prev = {1, 0}, prev = {0, 1};
    vpr[1] = prev_prev;
    vpr[2] = prev;
    for (int i = 3; i < 901; ++i) {
        prev_prev = vpr[i - 2];
        prev = vpr[i - 1];
        array<int, 2> new_one;
        new_one[0] = prev_prev[0] + prev[0];
        new_one[1] = prev_prev[1] + prev[1];
        vpr[i] = new_one;
        prev_prev = prev;
        prev = new_one;
    }
}

int32_t main() {
    int t;
    cin >> t; // Number of test cases

    precompute_fibonacci();

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k >= 901) {cout<<0<<endl;
            continue;
        }

        array<int, 2> val = vpr[k];
        int result = 0;
        for (int i = 0; i <= n; ++i) {
            int temp = (n - val[0] * i);
            if (temp % val[1] == 0) {
                if (temp / val[1] >= i) {
                    ++result;
                }
            }
        }

        cout << result << endl;
    }

}
