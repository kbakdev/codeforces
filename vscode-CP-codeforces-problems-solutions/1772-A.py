t = int(input())
for _ in range(t):
    expression = input().split('+')
    a, b = map(int, expression)
    print(a+b)
