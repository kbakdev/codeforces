from collections import defaultdict, Counter
from sys import setrecursionlimit, stdin

setrecursionlimit(10 ** 7)


def dfs(v, p):
    global graph, used, cycle_length
    used[v] = True
    for to in graph[v]:
        if to == p:
            continue
        if used[to]:
            cycle_length = len(used) - used[to] + 1
        else:
            used[to] = len(used) + 1
            dfs(to, v)


def solve():
    n = int(stdin.readline())
    a = list(map(int, stdin.readline().split()))
    a = [ai - 1 for ai in a]

    global graph, used, cycle_length
    graph = defaultdict(list)
    used = [0] * n
    cycle_length = 0

    for i in range(n):
        graph[i].append(a[i])
        graph[a[i]].append(i)

    dfs(0, -1)
    min_rounds = max_rounds = 0
    if cycle_length:
        min_rounds = 1
        degrees = Counter(a)
        max_rounds = sum(1 for d in degrees.values() if d == 2)
    else:
        degrees = Counter(a)
        max_rounds = sum(1 for d in degrees.values() if d > 1)
        min_rounds = max_rounds

    print(min_rounds, max_rounds)


t = int(stdin.readline())
for _ in range(t):
    solve()
