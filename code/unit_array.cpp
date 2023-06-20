#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int arraySize;
    cin >> arraySize;
    vector<int> array(arraySize);
    for(int i = 0; i < arraySize; i++) {
        cin >> array[i];
    }
    // perform operation on all elements from array and check if sum >= 0 AND product == 1, count operations, and at the end print count
    int count = 0;
    for(int i = 0; i < arraySize; i++) {
        for (int j = i; j < arraySize; j++) {
            int sum = 0;
            int product = 1;
            for (int k = i; k <= j; k++) {
                sum += array[k];
                product *= array[k];
            }
            if (sum >= 0 && product == 1) {
                count++;
                break;
            }
        }
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int testCases;
    cin >> testCases;
    while(testCases--) {
        solve();
    }
    return 0;
}
