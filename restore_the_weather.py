def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    a = sorted([(val, i) for i, val in enumerate(a)])
    b.sort()

    ans = [0] * n
    j = 0
    for val, i in a:
        while j < n and val - k > b[j]:
            j += 1
        if j == n or b[j] > val + k:
            return None
        ans[i] = b[j]
        j += 1

    return ans

t = int(input())
for _ in range(t):
    res = solve()
    if res is None:
        print(-1)
    else:
        print(*res)
