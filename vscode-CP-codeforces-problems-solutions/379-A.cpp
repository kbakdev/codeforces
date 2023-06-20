#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int hours = a;
    int leftovers = a;
    while(leftovers >= b) {
        hours += leftovers / b;
        int new_candles = leftovers / b;
        leftovers %= b;
        leftovers += new_candles;
    }
    cout << hours << endl;
    return 0;
}
