import sys
from collections import defaultdict, deque
import threading
sys.setrecursionlimit(10**7)
threading.stack_size(10**7)

def dfs(v, p):
    leaf = True
    for u in g[v]:
        if u==p: continue
        leaf = False
        dfs(u, v)
    if leaf: down[v] = v
    else: down[v] = min(down[u] for u in g[v] if u!=p)

def dfs2(v, p):
    for u in g[v]:
        if u==p: continue
        down[v] = min(down[v], down[u])
        dfs2(u, v)

def solve():
    n = int(input())
    for _ in range(n):
        global down, g
        N = int(input())
        g = defaultdict(list)
        down = [0]*(N+1)
        for _ in range(N-1):
            u, v = map(int, input().split())
            g[u].append(v)
            g[v].append(u)
        dfs(1, -1)
        dfs2(1, -1)
        Q = int(input())
        for _ in range(Q):
            x, y = map(int, input().split())
            print((down[x]==down[y])+1)

t = threading.Thread(target=solve)
t.start()
t.join()
