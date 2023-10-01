#include <iostream>
#include <algorithm>

using ll = long long;
const int LIMIT = 256;

int main() {
    int testCases;
    std::cin >> testCases;
    while(testCases--) {
        ll numElements;
        std::cin >> numElements;
        ll* elements = new ll[numElements + 2]();
        ll maxNum = 0;
        for (int i = 1; i <= numElements; i++) {
            std::cin >> elements[i];
            maxNum = std::max(maxNum, elements[i]);
        }

        for (int i = 1; i <= numElements; i++) {
            ll xorSum = elements[i];
            ll loopLimit = std::min(numElements, (ll)i + LIMIT);
            for (int j = i + 1; j <= loopLimit; j++) {
                xorSum ^= elements[j];
                maxNum = std::max(maxNum, xorSum);
            }
        }

        std::cout << maxNum << "\n";
        delete[] elements;
    }

    return 0;
}
