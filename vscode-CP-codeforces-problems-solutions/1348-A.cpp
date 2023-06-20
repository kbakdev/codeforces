#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum1 = 0, sum2 = 0;
        sum1 = pow(2, n);

        for (int i = 1; i < n; i++) {
            if (i < n / 2) {
                sum1 += pow(2, i);
            } else { 
                sum2 += pow(2, i);
            }
        }

        cout << abs(sum1 - sum2) << endl;
    }
    return 0;
}

