t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    max_ascii = max([ord(char) for char in s])
    print(max_ascii - 96)
