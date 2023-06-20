n = int(input())
p = int(input())
c = 1
for i in range(1, n):
    s = int(input())
    if p!=s:
        p=s
        c+=1
print(c)
