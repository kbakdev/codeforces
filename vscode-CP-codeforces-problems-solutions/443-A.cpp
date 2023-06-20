#include <bits/stdc++.h>
using namespace std;

int main() {
    string set;
    getline(cin, set);

    set.erase(remove(set.begin(), set.end(), '{'), set.end());
    set.erase(remove(set.begin(), set.end(), '}'), set.end());
    set.erase(remove(set.begin(), set.end(), ','), set.end());
    set.erase(remove(set.begin(), set.end(), ' '), set.end());

    set.erase(unique(set.begin(), set.end()), set.end());

    sort(set.begin(), set.end());
    int i;
    i = 0;
    while (i < set.size()) {
        if (set[i] == set[i + 1]) {
            set.erase(i, 1);
        }
        else {
            ++i;
        }
    }

    cout << set.size() << endl;

}