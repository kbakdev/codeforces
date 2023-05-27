from collections import Counter
from sys import stdin

MOD = 10**9+7
MAX = 2*10**5+10

fact = [1]*MAX
invfact = [1]*MAX

for i in range(1, MAX):
    fact[i] = (fact[i-1]*i)%MOD

invfact[-1] = pow(fact[-1], MOD-2, MOD)

for i in range(MAX-2, -1, -1):
    invfact[i] = (invfact[i+1]*(i+1))%MOD

def C(n, k):
    if k>n or k<0:
        return 0
    return (fact[n]*invfact[k]*invfact[n-k])%MOD

def solve():
    n, m = map(int, stdin.readline().split())
    a = list(map(int, stdin.readline().split()))
    a.sort()
    prefix = [0]*(n+1)
    for i in range(n):
        prefix[i+1] = prefix[i]+a[i]
    ans = 0
    for i in range(n):
        if a[i]>=m:
            l = i
            r = n-i-1
            if l>=m-1:
                ans = (ans + C(l, m-1))%MOD
            if r>=m-1:
                ans = (ans + C(r, m-1))%MOD
    print(ans)

t = int(stdin.readline())
for _ in range(t):
    solve()
