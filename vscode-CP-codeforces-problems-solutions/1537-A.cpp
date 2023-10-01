#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    if (arr.size() == sum) {
        return 0;
    }
    if (sum < 0) {
        return 1;
    }
    if (sum < arr.size()) {
        return 1;
    }
    if (arr.size() < sum) {
        return sum - arr.size();
    }

    return 0;

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << solve(arr) << endl;
    }
    }