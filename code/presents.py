n = int(input().strip())
p = list(map(int, input().strip().split()))

gifts = [0] * n
for i in range(n):
    gifts[p[i] - 1] = i + 1

print(' '.join(map(str, gifts)))