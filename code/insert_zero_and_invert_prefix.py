t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    p = [n]
    for i in range(n-1, 0, -1):
        if a[i] != a[i-1]:
            p.append(i)
    if a[0] == 1:
        p.append(0)
    print("YES")
    print(*p)
