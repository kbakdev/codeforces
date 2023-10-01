#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<long long> particles(n);
    for (int i = 0; i < n; ++i) {
        cin >> particles[i];
    }

    sort(particles.begin(), particles.end());

    long long current_charge = particles[0];
    long long remaining_charge = 0;
    for (int i = 1; i < n; ++i) {
        remaining_charge += particles[i];
    }

    long long max_charge = current_charge;
    for (int i = 1; i < n; ++i) {
        current_charge += particles[i];
        remaining_charge -= particles[i];
        max_charge = max(max_charge, current_charge * remaining_charge);
    }

    return max_charge;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}
