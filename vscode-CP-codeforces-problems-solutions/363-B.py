n, k = map(int,input().split())
h = list(map(int,input().split()))
 
sum_ = sum(h[:k])
min_sum = sum_
start = 0

for i in range(k, n):
    sum_ = sum_ + h[i] - h[i-k]

    if sum_ < min_sum:
        min_sum = sum_
        start = i - k + 1

print(start + 1)
