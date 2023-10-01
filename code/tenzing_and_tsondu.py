t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    # Sort Tsondu's and Tenzing's monsters' ability values in descending order
    a.sort(reverse=True)
    b.sort(reverse=True)

    # monsters fight, if the monster wins, then it's ability value is decreased by ability value of the monster it defeated
    # if the monster loses, then it's removed from the game
    
    # fight
    for i in range(min(n, m)):
        if a[i] > b[i]:
            a[i] -= b[i]
        else:
            a[i] = 0

    # print name of the winner
    if sum(a) > sum(b):
        print("Tsondu")
    elif sum(a) < sum(b):
        print("Tenzing")
    else:
        print("Draw")