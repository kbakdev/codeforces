#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;

        int flag = 0; // Flag to check if we should stop further rounding
        for (int i = n.size() - 2; i >= 0; i--) { // Start from second last digit
            if (flag) {
                n[i] = '0';
            } else if (n[i] >= '5') {
                n[i] = '0';

                // Increment the next significant digit, handle overflow
                int j = i - 1;
                while (j >= 0 && n[j] == '9') {
                    n[j] = '0';
                    j--;
                }

                if (j < 0) {
                    n.insert(n.begin(), '1'); // If all digits become 0, append a new '1' at start
                } else {
                    n[j]++;
                }
                flag = 1; // Set flag as further rounding is not needed
            }
        }
        cout << n << endl;
    }
    return 0;
}
