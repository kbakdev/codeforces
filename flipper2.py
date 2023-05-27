def solve():
    n = int(input())
    p = list(map(int, input().split()))

    i = n - 2
    while i >= 0 and p[i] >= p[i + 1]:
        i -= 1

    if i < 0:
        print(*p)
        return

    j = n - 1
    while p[j] <= p[i]:
        j -= 1

    p[i], p[j] = p[j], p[i]
    p[i + 1:] = p[i + 1:][::-1]

    print(*p)

t = int(input())
for _ in range(t):
    solve()
