for _ in range(int(input().strip())):
    b, c, h = map(int, input().split())
    print(1 + 2 * min(b - 1, c + h))
