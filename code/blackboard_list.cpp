#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> blackboard(n);
        for (int i = 0; i < n; i++) {
            cin >> blackboard[i];
        }
        cout << *max_element(blackboard.begin(), blackboard.end()) << endl;
    }
    return 0;
}
