#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;
const int LIMIT = 256;

int main() {
    int testCases;
    std::cin >> testCases;
    while(testCases--) {
        ll numElements;
        std::cin >> numElements;
        std::vector<ll> elements(numElements + 2, 0);
        ll maxNum = 0;

        for (int i = 1; i <= numElements; i++) {
            std::cin >> elements[i];
            maxNum = std::max(maxNum, elements[i]);
        }

        for (int i = 1; i <= numElements; i++) {
            ll xorSum = elements[i];
            for (int j = i + 1; j <= std::min(numElements,(ll)i + LIMIT); j++) {
                xorSum ^= elements[j];
                maxNum = std::max(maxNum, xorSum);
            }
        }

        std::cout << maxNum << "\n";
    }

    return 0;
}
