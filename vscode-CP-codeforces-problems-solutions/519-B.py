n = int(input().strip())
a = list(map(int, input().strip().split()))
b = list(map(int, input().strip().split()))
c = list(map(int, input().strip().split()))

print(sum(a) - sum(b))
print(sum(b) - sum(c))
