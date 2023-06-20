from sys import stdout

n = int(input())
a = list(map(int, input().split()))
p = a.count(max(a))
q = sum(i%2 for i in a) - p%2
player = (p%2 == 0 or q != 0)
print("First" if player else "Second")
stdout.flush()

b = [i+1 for i in range(n)]
while True:
    if player:
        if sum(a) == 0:
            break
        idx = a.index(max(a))
        print(idx+1)
        stdout.flush()
        a[idx] -= 1
    else:
        idx = int(input())
        if idx == 0:
            break
        a[idx-1] -= 1
        if max(a) not in a:
            b.remove(idx)
    player = not player
    if sum(a) == 0:
        break
