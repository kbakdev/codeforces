#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long t;
    std::cin >> t;

    while(t--) {
        long long a, b;
        std::cin >> a >> b;
        std::cout << a + b << '\n';
    }
    
    return 0;
}
