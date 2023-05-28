from collections import defaultdict
t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    pos = defaultdict(list)
    for i in range(n):
        pos[a[i]].append(i + 1)
        pos[b[i]].append(-(i + 1))

    for x in pos:
        pos[x].sort()

    max_len = 1
    for x in pos:
        c = [0] * (len(pos[x]) + 2)
        for i in range(len(pos[x]) - 1, -1, -1):
            c[i] = max(c[i + 1], c[i + 2] - pos[x][i])
        for i in range(len(pos[x])):
            max_len = max(max_len, c[i + 1] + pos[x][i])

    print(max_len)
