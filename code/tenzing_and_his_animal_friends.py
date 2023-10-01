from heapq import *
from collections import defaultdict

def main():
    n, m = map(int, input().split())
    maxtime = [0] * n
    restrictions = [set() for _ in range(n)]
    friends = [[] for _ in range(n)]
    hq = []

    for _ in range(m):
        u, v, y = map(int, input().split())
        u -= 1
        v -= 1
        restrictions[u].add((v, y))
        restrictions[v].add((u, y))
        maxtime[u] = max(maxtime[u], y)
        maxtime[v] = max(maxtime[v], y)

    maxtime[-1] = 0
    for i in range(n-2, -1, -1):
        maxtime[i] = min(maxtime[i], maxtime[i+1])
        heappush(hq, (-maxtime[i], i))

    while hq:
        t, i = heappop(hq)
        t = -t
        if t < maxtime[i]: continue
        for j, y in restrictions[i]:
            if t <= y and t > maxtime[j]:
                maxtime[j] = t
                heappush(hq, (-t, j))

    if maxtime[0] > maxtime[1]:
        print("inf")
    else:
        games = []
        time = [0] * n
        total = 0
        for i in range(n-1):
            if time[i] < maxtime[i]:
                time[i] = maxtime[i]
                total += time[i]
                game = ['0'] * n
                for j in range(i+1):
                    game[j] = '1'
                games.append((''.join(game), time[i]))
        print(total, len(games))
        for game, t in games:
            print(game, t)

main()
