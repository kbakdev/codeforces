from math import ceil
t = int(input().strip())

for _ in range(t):
    n, k = map(int, input().split())
    if k == 1:
        ones = n
    elif n >= 6 and k !=1:
        ones = ceil(n / k) + 1
    else:
        ones = ceil(n / k)

    print(ones)



