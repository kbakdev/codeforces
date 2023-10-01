def sieve(n):
    prime = [True for _ in range(n+1)]
    p = 2
    while p * p <= n:
        if prime[p] == True:
            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1
    return [p for p in range(2, n+1) if prime[p]]

t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    primes = sieve(n)
    used = [False for _ in range(n+1)]
    ans = []
    for prime in primes:
        if not used[prime]:
            ans.append(prime)
            used[prime] = True
    for i in range(n, 0, -1):
        if not used[i]:
            ans.append(i)
    print(*ans)
