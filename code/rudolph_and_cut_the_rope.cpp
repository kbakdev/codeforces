#include<iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    
    while(t--) {
        int n, a, b;
        std::cin >> n;
        int s = 0;
        while(n--) {
            std::cin >> a >> b;
            if (a > b) ++s;
        }
        std::cout << s << '\n';
    }

    return 0;
}
