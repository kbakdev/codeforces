import sys
from collections import defaultdict

def solve():
    n, k = map(int, input().split())
    c = list(map(int, input().split()))

    dp = [0] * (n + 1)
    counts = defaultdict(int)

    for i in range(n):
        if i >= k:
            counts[c[i - k]] -= 1
        while dp[i + 1 - k] + k < dp[i] + 1 and i + 1 >= k:
            counts[c[i + 1 - k - dp[i + 1 - k] - 1]] -= 1
            dp[i + 1 - k] += 1
        counts[c[i]] += 1
        dp[i + 1] = max(dp[i + 1], dp[i])
        dp[i + 1] = max(dp[i + 1], dp[i + 1 - k] + counts[c[i]])

    print("YES" if dp[n] == n else "NO")

t = int(input())
for _ in range(t):
    solve()
