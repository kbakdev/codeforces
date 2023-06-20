t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    max_num = a[-1]
    for i in range(n-2, -1, -1):
        if max_num - a[i] in a:
            print(a[i])
            break
