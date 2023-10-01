import heapq

def solve():
    n, k = map(int, input().split())
    c = list(map(int, input().split()))
    c = [0] + c
    p = list(map(int, input().split()))

    mix = [ [] for _ in range(n+1) ]
    for i in range(1, n+1):
        m = list(map(int, input().split()))
        for j in m[1:]:
            mix[i].append(j)
    
    q = []
    for i in range(1, k+1):
        q.append((c[p[i]], p[i]))
    
    heapq.heapify(q)

    while len(q) > 0:
        cost, i = heapq.heappop(q)
        if c[i] < cost:
            continue
        for j in mix[i]:
            if c[j] > c[i]:
                c[j] = c[i]
                heapq.heappush(q, (c[j], j))

    print(' '.join(map(str, c[1:])))

t = int(input())
for _ in range(t):
    solve()
