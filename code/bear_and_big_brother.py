s = input()
s = s.split()
limak = int(s[0])
bob = int(s[1])
years = 1
while True:
    limak *= 3
    bob *= 2
    if limak > bob:
        break
    years += 1
print(years)