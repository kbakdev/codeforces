def solve():
    array_size = int(input())
    array = [int(x) for x in input().split()]
    # perform operation on all elements from array and check if sum >= 0 AND product == 1, count operations, and at the end print count
    count = 0
    for i in range(array_size):
        for j in range(i, array_size):
            sum_elements = 0
            product = 1
            for k in range(i, j+1):
                sum_elements += array[k]
                product *= array[k]
            if sum_elements >= 0 and product == 1:
                break
            else:
                count += 1

    print(count)


test_cases = int(input())
for _ in range(test_cases):
    solve()
