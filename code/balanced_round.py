import sys
from collections import deque

def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    count = 1
    for i in range(1, n):
        if a[i-1] - a[i] <= k:
            count += 1
        else:
            break
    print(count)

t = int(input().strip())
for _ in range(t):
    solve()
