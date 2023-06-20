t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    a = list(map(int, input().strip().split()))
    
    p = []
    visited = set()
    
    for num in a:
        if num not in visited:
            p.append(num)
            visited.add(num)
    
    print(*p)
