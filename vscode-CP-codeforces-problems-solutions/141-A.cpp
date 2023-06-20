#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;

    string combined = guest + host;

    if (combined.size() != pile.size()) {
        cout << "NO";
        return 0;
    }

    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());

    if (combined == pile) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

