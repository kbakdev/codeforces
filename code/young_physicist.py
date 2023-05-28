n = int(input())
x = y = z = 0
for _ in range(n):
    xi, yi, zi = map(int, input().split())
    x += xi
    y += yi
    z += zi
print("YES" if x == y == z == 0 else "NO")
