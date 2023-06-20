n = int(input())
p = list(map(int, input().split()))

sum = 0
for i in range(n):
    sum += p[i]

print(sum/n)