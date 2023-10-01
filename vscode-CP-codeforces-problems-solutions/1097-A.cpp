#include <iostream>
#include <string>

using namespace std;

int main() {
    string table, hand;
    cin >> table;
    bool canPlay = false;
    for (int i = 0; i < 5; i++) {
        cin >> hand;
        if (hand[0] == table[0] || hand[1] == table[1]) {
            canPlay = true;
        }
    }
    if (canPlay) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
