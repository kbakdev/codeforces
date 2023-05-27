def min_time_to_acquire_skills(n, books):
    min_time_skill1 = float('inf')
    min_time_skill2 = float('inf')
    min_time_both_skills = float('inf')

    for i in range(n):
        time, skills = books[i]
        time = int(time)  # Convert time to integer before comparing

        if skills == '10':
            min_time_skill1 = min(min_time_skill1, time)
        elif skills == '01':
            min_time_skill2 = min(min_time_skill2, time)
        elif skills == '11':
            min_time_both_skills = min(min_time_both_skills, time)

    if min_time_skill1 == float('inf') or min_time_skill2 == float('inf'):
        if min_time_both_skills == float('inf'):
            return -1
        else:
            return min_time_both_skills
    else:
        return min(min_time_skill1 + min_time_skill2, min_time_both_skills)


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        books = [tuple(input().split()) for _ in range(n)]
        print(min_time_to_acquire_skills(n, books))


if __name__ == "__main__":
    main()
