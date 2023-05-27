MOD = 10**9 + 7

def count_subsequences(n, k, a):
    dp = [[0] * (k + 1) for _ in range(64)]
    dp[0][0] = 1

    for ai in a:
        new_dp = [row.copy() for row in dp]
        for i in range(64):
            for j in range(k + 1):
                if dp[i][j] == 0:
                    continue
                new_dp = [[0 for j in range(n + 1)] for i in range(64)]
                for i in range(64):
                    for j in range(k + 1):
                        if dp[i][j] == 0:
                            continue
                        new_dp[i][j] += dp[i][j]
                        new_dp[i][j] %= MOD
                        new_dp[i | ai][j + 1] += dp[i][j]
                        new_dp[i | ai][j + 1] %= MOD
        dp = new_dp

    return dp[0][k]

# Read input, process test cases and print output
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    print(count_subsequences(n, k, a))
