from collections import Counter

def can_arrange(n, l):
    cnt = Counter(l)
    for i in range(max(l) + 1):
        if cnt[i] < cnt[i + 1]:
            return "NO"
        cnt[i] -= cnt[i + 1]
    return "YES"

t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    l = list(map(int, input().strip().split()))
    print(can_arrange(n, l))
