def solve():
    n, k = map(int,input().strip().split())
    suspicion = list(map(int,input().strip().split()))
    suspicion = [0] + sorted(range(1, n + 1), key = lambda x: -suspicion[x - 1])
    dp = [[0]*(k + 1) for _ in range(n + 1)]
    for i in range(1, n + 1):
        dp[i][1] = suspicion[1] - suspicion[i + 1]*(i - 1)
        for j in range(2, min(i, k) + 1):
            dp[i][j] = max(dp[x - 1][j - 1] + suspicion[j] - suspicion[x]*(j - 1) for x in range(j, i + 1))
    print(max(dp[i][k] for i in range(k, n + 1)))

t = int(input().strip())
for _ in range(t):
    solve()
