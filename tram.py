n = input()
n = int(n)
in_tram = 0
max_num = 0
for i in range(n):
    a, b = input().split()
    a = int(a)
    b = int(b)
    in_tram -= a
    in_tram += b
    if in_tram > max_num:
        max_num = in_tram
print(max_num)
