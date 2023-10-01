t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    a.append(0)
    answer = a[0]-1
    for i in range(n):
        if a[i]<a[i+1]:
            answer += a[i+1]-1
    print(answer)
