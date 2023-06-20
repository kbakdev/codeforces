n = int(input())
p = list(map(int, input().split()))
q = list(map(int, input().split()))

for i in range(n):
    if i + 1 in p or i + 1 in q:
        continue

    else:
        print('Oh, my keyboard!')
        exit()

print('I become the guy.')