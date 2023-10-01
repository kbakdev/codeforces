t = int(input())
for _ in range(t):
    n, m, k, H = map(int, input().split())
    h = list(map(int, input().split()))
    count = 0
    for i in range(n):
        diff = abs(H - h[i])
        if diff % k == 0 and 1 <= diff // k <= m - 1:
            count += 1
    print(count)
