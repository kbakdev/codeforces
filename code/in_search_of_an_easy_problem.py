n = input()
opinions = input().split()
count = 0
for i in opinions:
    if i == '1':
        count += 1
if count > 0:
    print("HARD")
else:
    print("EASY")