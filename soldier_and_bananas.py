s = input().split()
k = int(s[0])
n = int(s[1])
w = int(s[2])

total = 0
for i in range(1, w + 1):
    total += i * k

if total > n:
    print(total - n)
else:
    print(0)