y = input()

while True:
    y = str(int(y) + 1)
    if len(set(y)) == len(y):
        print(y)
        break