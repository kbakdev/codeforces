n = int(input())
a = 0
for i in range(n):
    a += pow(-1, i+1) * (i+1)
print(a)