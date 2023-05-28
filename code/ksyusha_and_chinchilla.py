import sys
from collections import defaultdict

input = sys.stdin.readline

def solve():
    n = int(input())
    graph = defaultdict(list)
    edges = [0]*n
    for i in range(1, n):
        u, v = map(int, input().split())
        u -= 1
        v -= 1
        edges[i] = (u, v)
        graph[u].append((v, i))
        graph[v].append((u, i))
    color = [0]*n
    removed = [False]*n
    result = []

    def dfs(v, p):
        color[v] = 1
        leaf = True
        for u, i in graph[v]:
            if u == p:
                continue
            leaf = False
            if not color[u]:
                if dfs(u, v):
                    removed[i] = True
                    result.append(i+1)
                else:
                    color[v] = 2
        return leaf if color[v] == 1 else False

    dfs(0, -1)

    for v in range(n):
        if color[v] == 1:
            print(-1)
            return
    print(len(result))
    print(*result)

t = int(input())
for _ in range(t):
    solve()
