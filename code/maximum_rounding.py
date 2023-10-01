def maximum_rounding(x):
    # Convert number to list of digits for easier manipulation
    digits = list(str(x))

    n = len(digits)
    i = n - 1

    while i > 0:
        # If current digit is 5 or more
        if int(digits[i]) >= 5:
            j = i - 1
            # Keep moving left until a non-9 digit is found
            while digits[j] == '9' and j > 0:
                j -= 1
            
            # If we've reached the leftmost digit and it's 9
            if j == 0 and digits[j] == '9':
                digits[j] = '1'
                digits = ['0'] + digits
            else:
                digits[j] = str(int(digits[j]) + 1)
                
            for k in range(j + 1, n):
                digits[k] = '0'
            break

        i -= 1

    return int("".join(digits))

# Input
t = int(input())
for _ in range(t):
    x = int(input())
    print(maximum_rounding(x))
