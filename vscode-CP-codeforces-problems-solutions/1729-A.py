t = int(input().strip())
for _ in range(t):
    a, b, c = map(int, input().strip().split())
    
    first_elevator_time = abs(1 - a)
    second_elevator_time = abs(b - c) + abs(1 - c)

    if first_elevator_time < second_elevator_time:
        print(1)
    elif first_elevator_time > second_elevator_time:
        print(2)
    else:
        print(3)
