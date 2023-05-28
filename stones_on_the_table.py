n = int(input())
s = input()
stones = list(s)
min_moves = 0
for i in range(1, n):
    if stones[i-1] == stones[i]:
        min_moves += 1
print(min_moves)