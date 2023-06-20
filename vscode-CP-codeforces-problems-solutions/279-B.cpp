#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    int start = 0, end = 0, sum = 0, maxBooks = 0;
    while(end < n) {
        sum += a[end];
        while(sum > t) {
            sum -= a[start];
            start++;
        }
        maxBooks = max(maxBooks, end - start + 1);
        end++;
    }
    cout << maxBooks << "\n";
    return 0;
}
