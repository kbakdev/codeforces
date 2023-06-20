def solve():
    n = int(input())
    c = list(map(int, input().split()))
    p = [0] * (n + 1)
    q = [0] * (n + 1)
    r = [0] * (n + 1)
    res = [0] * (n + 1)
    for i in range(1, n + 1):
        p[i] = p[i - 1] + (c[i - 1] == 1)
        q[i] = max(q[i - 1], p[i])
        r[i] = max(r[i - 1], (c[i - 1] == 1) + p[i - 1])
    res[1] = n - q[n]
    for k in range(2, n + 1):
        dp = [0] * (n + 1)
        dp2 = [0] * (n + 1)
        for i in range(k, n + 1):
            dp[i] = max(dp[i - 1], p[i - k] + ((c[i - 1] == 1) and i >= k + 1) + dp2[i - k])
            dp2[i] = max(dp2[i - 1], dp[i])
        res[k] = n - dp2[n]
    print(*res[1:])

t = int(input())
for _ in range(t):
    solve()
