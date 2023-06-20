t = int(input())
for _ in range(t):
    n, a, b = map(int, input().split())
    pattern = ''.join([chr(97 + i % b) for i in range(a)])
    print((pattern * (n // a) + pattern[:n % a]))
