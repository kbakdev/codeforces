from sys import stdin, stdout
from collections import defaultdict

def add_edge(u, v):
    graph[u].append(v)
    graph[v].append(u)

def dfs_iterative():
    stack = [(0, -1, 0)]
    ans = 0
    while stack:
        v, parent, cat_count = stack.pop()
        if cat[v] == 0:
            cat_count = 0
        else:
            cat_count += 1
        if cat_count > m:
            continue
        isLeaf = True
        for u in graph[v]:
            if u == parent:
                continue
            isLeaf = False
            stack.append((u, v, cat_count))
        if isLeaf:
            ans += 1
    return ans

n, m = map(int, stdin.readline().split())
cat = list(map(int, stdin.readline().split()))
graph = defaultdict(list)
for _ in range(n-1):
    u, v = map(int, stdin.readline().split())
    add_edge(u-1, v-1)

stdout.write(str(dfs_iterative()))
