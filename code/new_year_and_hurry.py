def max_problems(n, k):
    total_time = 240 
    time_to_party = total_time - k
    problem_time = 0 
    problems_solved = 0
    
    for i in range(1, n + 1):
        if problem_time + 5 * i <= time_to_party:
            problem_time += 5 * i
            problems_solved += 1
        else:
            break

    return problems_solved

n, k = map(int, input().split())
print(max_problems(n, k))
