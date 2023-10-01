#include <iostream>
#include <vector>
#include <algorithm>

long long calculateMaxSumOfAlternatingSubsequence(const std::vector<long long>& sequence) {
    long long currentNumber = sequence[0];
    long long maxSum = currentNumber;

    for (std::size_t i = 1; i < sequence.size(); i++) {
        if ((sequence[i] > 0 && currentNumber < 0) || (sequence[i] < 0 && currentNumber > 0)) {
            currentNumber = sequence[i];
            maxSum += currentNumber;
        }
        else {
            currentNumber = std::max(currentNumber, sequence[i]);
            maxSum = std::max(maxSum, maxSum - sequence[i - 1] + currentNumber);
        }
    }

    return maxSum;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        std::cout << calculateMaxSumOfAlternatingSubsequence(a) << '\n';
    }

    return 0;
}
