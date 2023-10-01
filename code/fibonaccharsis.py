vpr = [(1,0), (0,1)] + [(0,0)]*899
for i in range(2, 901):
    prev_prev = vpr[i-2]
    prev = vpr[i-1]
    new_one = (prev_prev[0] + prev[0], prev_prev[1] + prev[1])
    vpr[i] = new_one
    prev_prev = prev
    prev = new_one

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    if k >= 901:
        print(0)
        continue
    val = vpr[k]
    result = 0
    for i in range(n+1):
        temp = (n - val[0] * i)
        if temp % val[1] == 0:
            if temp // val[1] >= i:
                result += 1
    print(result)
