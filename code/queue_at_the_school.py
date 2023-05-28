[n, t] = input().split()
s = input()

for i in range(int(t)):
    s = s.replace('BG', 'GB')

print(s)