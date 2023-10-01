t = int(input())
pattern_3 = 'abc'
pattern_4 = 'abcd'

for _ in range(t):
    n = int(input())
    if n <= 4:
        print(pattern_3[:n])
    else:
        q, r = divmod(n-4, 4)
        print(pattern_3 + pattern_4 * q + pattern_4[:r])
