n = input()
count = 0
for i in range(int(n)):
    [p, q] = input().split()
    if int(q) - int(p) >= 2:
        count += 1
print(count)