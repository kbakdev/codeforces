import heapq
t = int(input())
for _ in range(t):
    n = int(input())
    lamps = [list(map(int, input().split())) for _ in range(n)]
    lamps.sort(key=lambda x: (-x[0], -x[1]))
    queue = []
    res = 0
    j = n

    print(res)
