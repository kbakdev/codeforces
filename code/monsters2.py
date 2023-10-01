from operator import itemgetter

t = int(input())

def compare_pair(p1, p2):
    if p1[0] < p2[0]:
        return False
    elif p1[0] > p2[0]:
        return True
    return p1[1] < p2[1]

def solve():
    num_element, k = map(int, input().split())
    arr = list(map(int, input().split()))

    for i in range(num_element):
        arr[i] %= k

    ans = []
    for i in range(num_element):
        if arr[i] == 0:
            ans.append(i + 1)

    v = [(arr[i], i + 1) for i in range(num_element)]

    v.sort(key=itemgetter(0, 1), reverse=True)
    for i in v:
        if i[0] != 0:
            ans.append(i[1])
    print(*ans)

for _ in range(t):
    solve()
