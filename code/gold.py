# Note
# The first test case is pictured in the statement. We can make a pile of size 4.
#
# In the second test case, we can perform the following operations: {9}→{6,3}→{4,2,3}. The pile that is split apart is colored red before each operation.
#
# In the third test case, we can't perform a single operation.
#
# In the fourth test case, we can't end up with a larger pile than we started with.
# def can_make_pile(n, m):
#     if m > n:
#         return False
#     if n / m == 2:
#         return False
#     if m == 1:
#         return False
# 
#     return n % 2 == 0 or m % 2 == 0

# def can_make_pile(n, m):
#     if m > n:
#         return False
#
#     power = 0
#     while n % 2 == 0:
#         n = n // 2
#         power += 1
#
#     max_power = 2 ** power
#     if n * max_power >= m:
#         return True
#     else:
#         return False
#
#
# def main():
#     t = int(input())
#     for _ in range(t):
#         n, m = map(int, input().split())
#         print("YES" if can_make_pile(n, m) else "NO")
#
# if __name__ == "__main__":
#     main()


# def can_make_pile(n, m):
#     if m > n:
#         return False
# 
#     while n % 2 == 0:
#         n = n // 2
# 
#     # Now n is an odd number
#     max_m = n
#     while n % 2 == 0:
#         max_m *= 2
#         n = n // 2
# 
#     return m <= max_m
# 
# 
# def main():
#     t = int(input().strip())
#     for _ in range(t):
#         n, m = map(int, input().strip().split())
#         if can_make_pile(n, m):
#             print("YES")
#         else:
#             print("NO")
# 
# 
# if __name__ == "__main__":
#     main()

def can_make_pile(n, m):
    if m > n:
        return False
    if n / m == 2:
        return False

    # n = 27, m = 10 should return FALSE
    # divide n number to check if it can contain m, which is 10 in this case
    # check if we can make pile of size 10 from 27
    # we can't make pile of size 10 from 27
    # 27 can have (18, 9) cause it's 66% and 33% of 27 but not 10
    # 27 -> 18, 9 -> 12, 6, 9 -> 8, 4, 6, 9 -> ETC, so we can't make pile of size 10 from 27
    # 27 -> 18, 9 -> 12, 6, 9 -> 8, 4, 6, 9 -> 6, 3, 4, 6, 9 -> 4, 2, 3, 4, 6, 9 -> 2, 1, 2, 3, 4, 6, 9 -> 1, 1, 1, 2, 3, 4, 6, 9
    # make an statement to print NO in this case
    # n = [2/3n, 1/3n], then you have to check if m is element of the array, if no, try to divide 2/3n and 1/3n again
    # save the result in an array, if m is element of the array, print YES, if not, print NO

    while m > n:
        # add two elements to the array
        array = [n * 2 / 3, n / 3]
        # check if m is element of the array
        if m in array:
            return True
        else:
            # continue
            continue

    if m == n:
        return True
    else:
        return False

    # return n % 2 == 0 or m % 2 == 0

# Read input, process test cases and print output
t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    if can_make_pile(n, m):
        print("YES")
    else:
        print("NO")
