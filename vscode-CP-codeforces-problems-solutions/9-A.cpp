#include <iostream>
#include <algorithm>

int main() {
    int Y, W;
    std::cin >> Y >> W;
    
    int maximum = std::max(Y, W);
    int favorableOutcomes = 6 - maximum + 1;

    int gcd = std::__gcd(favorableOutcomes, 6);
    
    std::cout << favorableOutcomes / gcd << "/" << 6 / gcd << "\n";
    
    return 0;
}
