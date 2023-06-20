a = list(input())
b = list(input())
c = []

for i in range(len(a)):
    if a[i] == b[i]:
        c.append('0')
    else:
        c.append('1')

print(''.join(c))