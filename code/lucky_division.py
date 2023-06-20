lucky_digits = [4, 7]
n = input()
permutations = [4, 7, 47, 74, 447, 474, 477, 744, 747, 774]

if all(int(i) in lucky_digits for i in n) or any(int(n) % i == 0 for i in permutations):
    print("YES")
else:
    print("NO")