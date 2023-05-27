def solve():
    n = int(input())
    a = list(map(int, input().split()))

    a.sort()
    k = a[0]
    if k % 2:
        for i in range(1, n):
            if a[i] % 2 == 0 and (a[i] - k) % 2 == 0:
                print('NO')
                return
    else:
        for i in range(1, n):
            if a[i] % 2 and (a[i] - k) % 2:
                print('NO')
                return
    print('YES')

t = int(input())
for _ in range(t):
    solve()
