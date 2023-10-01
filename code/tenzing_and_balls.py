from sys import stdin, stdout
from collections import defaultdict

def solve():
    n = int(stdin.readline())
    a = list(map(int, stdin.readline().split()))
    a.insert(0,0)
    dp = [0]*(n+1)
    last = [0]*(n+1)
    prefix = [0]*(n+1)
    position = defaultdict(list)

    for i in range(1, n+1):
        prefix[i] = prefix[i-1]
        if len(position[a[i]]) >= 2:
            j, k = position[a[i]][-2:]
            dp[i] = max(dp[i], dp[j] + k-j)
            prefix[i] = max(prefix[i], prefix[j] + k-j, prefix[k])
        else:
            dp[i] = dp[i-1]
            prefix[i] = max(prefix[i], prefix[i-1])
        position[a[i]].append(i)
        
    stdout.write(f"{n - max(prefix[n], dp[n])-1}\n")

t = int(stdin.readline())
for _ in range(t):
    solve()
