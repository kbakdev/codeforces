def forbidden_integer(t, testcases):
    res = []
    for i in range(t):
        n, k, x = testcases[i]
        if k*(n//k) < n:
            res.append('NO')
        else:
            res.append('YES')
            sequence = []
            while n > 0:
                if n >= k and k != x:
                    sequence.append(k)
                    n -= k
                elif n > x:
                    sequence.append(k-1)
                    n -= k-1
                else:
                    if n != x:
                        sequence.append(n)
                        n = 0
                    else:
                        sequence.append(n-1)
                        sequence.append(1)
                        n = 0
            res.append(str(len(sequence)))
            res.append(' '.join(map(str, sequence)))
    return res

t = 5
testcases = [(10, 3, 2), (5, 2, 1), (4, 2, 1), (7, 7, 3), (6, 1, 1)]
print('\n'.join(forbidden_integer(t, testcases)))
