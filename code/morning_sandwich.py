t = int(input().strip())
for _ in range(t):
    b, c, h = map(int, input().split())
    fillings = min(b - 1, c + h)
    layers = 1 + fillings + fillings
    print(layers)
