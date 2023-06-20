t = int(input())
for _ in range(t):
    x, y = map(int,input().split())
    a, b = map(int,input().split())
    if a*2 < b:
        print((x+y)*a)
    else:
        print(min(x,y)*b + (max(x,y)-min(x,y))*a)
