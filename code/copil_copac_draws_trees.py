from collections import defaultdict
t = int(input())
for _ in range(t):
    n = int(input())
    edges = defaultdict(list)
    order = [0]*(n+1)
    for i in range(n-1):
        u, v = map(int, input().split())
        edges[u].append(v)
        edges[v].append(u)
        order[max(u, v)] = i+1
    for i in range(1, n+1):
        edges[i].sort(key=lambda x: order[x])
    visited = [False]*(n+1)
    stack = [1]
    readings = 0
    while stack:
        readings += 1
        next_stack = []
        for u in stack:
            visited[u] = True
            for v in edges[u]:
                if not visited[v]:
                    next_stack.append(v)
        stack = next_stack
    print(readings)
