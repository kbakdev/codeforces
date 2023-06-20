t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    a.reverse()
    sum_ = sum(a)
    if sum_ % 2 != 0:
        print('NO')
    else:
        sum_div2 = sum_ // 2
        current_sum = 0
        for i in range(n):
            current_sum += a[i]
            if current_sum == sum_div2:
                print('YES')
                break
            elif current_sum > sum_div2:
                print('NO')
                break
        else:
            print('NO')
