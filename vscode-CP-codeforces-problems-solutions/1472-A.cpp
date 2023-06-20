#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long w, h, n;
        std::cin >> w >> h >> n;
        long long pieces = 1;
        while (w % 2 == 0) {
            w /= 2;
            pieces *= 2;
        }
        while (h % 2 == 0) {
            h /= 2;
            pieces *= 2;
        }
        if (pieces >= n) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
