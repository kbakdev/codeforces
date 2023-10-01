import heapq

t = int(input().strip())
for _ in range(t):
    n, k = map(int, input().strip().split())
    health = list(map(int, input().strip().split()))
    monsters = [(-health[i], i) for i in range(n)]
    heapq.heapify(monsters)
    result = []
    while monsters:
        max_health, idx = heapq.heappop(monsters)
        max_health = -max_health
        if max_health > k:
            heapq.heappush(monsters, (-(max_health - k), idx))
        else:
            result.append(idx+1)
    print(*result)
