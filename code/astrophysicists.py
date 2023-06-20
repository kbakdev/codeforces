def max_savings(t, test_cases):
    for i in range(t):
        n, k, g = test_cases[i]
        total_silver = k * g
        half_g = (g + 1) // 2

        num_people = min(n, (total_silver) % n)
        remaining_people = n - num_people
        
        total_paid = num_people * ((total_silver) // n + half_g - 1) + remaining_people * ((total_silver) // n + half_g)
        savings = total_silver - total_paid
        print(savings)

t = 5
test_cases = [
    (3, 3, 100),
    (2, 1, 14),
    (91, 2, 13),
    (36, 16, 6),
    (73, 8, 22)
]
max_savings(t, test_cases)
