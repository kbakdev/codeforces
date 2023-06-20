n = input()
coins = input().split()
coins = [int(i) for i in coins]
coins.sort()
sum_coins = 0
stolen_coins = 0
moves = 0
for i in coins:
    sum_coins += i
while sum_coins/2 >= stolen_coins:
    moves += 1
    stolen_coins += coins.pop()
print(moves)