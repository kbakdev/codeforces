def is_square(num):
    root = int(num ** 0.5)
    return root * root == num

def sum_of_cans(n):
    square_n = n * n
    total = 0
    i = 1
    while i * i < square_n:
        if is_square(square_n - i * i):
            total += i * i
        i += 1
    return total

# Read input, process test cases and print output
t = int(input())
for _ in range(t):
    n = int(input())
    print(sum_of_cans(n))
