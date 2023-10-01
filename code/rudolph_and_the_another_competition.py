from sys import stdin, stdout
from heapq import *

def solve():
    n, m, h = map(int, input().split())
    times = [list(map(int, input().split())) for _ in range(n)]
    
    times_flattened = [(t, i) for i in range(n) for t in times[i]]
    times_flattened.sort()
    
    scores = [0]*n
    penalties = [0]*n
    min_heap = []

    for time, participant in times_flattened:
        if time > h: 
            break
        while min_heap and min_heap[0][0] + time > h:
            _, removed_participant = heappop(min_heap)
            scores[removed_participant] -= 1
            penalties[removed_participant] -= min_heap[0][0] if min_heap else 0
        heappush(min_heap, (time, participant))
        scores[participant] += 1
        penalties[participant] += time if min_heap and min_heap[0] == (time, participant) else 0

    Rudolf_score = scores[0]
    Rudolf_penalty = penalties[0]
    position = sum(score > Rudolf_score or (score == Rudolf_score and penalty < Rudolf_penalty) for score, penalty in zip(scores, penalties)) + 1

    stdout.write(str(position) + '\n')

t = int(stdin.readline())

for _ in range(t):
    solve()
