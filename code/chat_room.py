s = input()
elements_to_get = ['h', 'e', 'l', 'l', 'o']
a = list(s)
i = 0
while i < len(a):
    if a[i] not in elements_to_get:
        del a[i]
    else:
        i += 1
i = 0
while i < len(a):
    if len(elements_to_get) == 0:
        break
    if a[i] == elements_to_get[0]:
        del elements_to_get[0]
    i += 1

if len(elements_to_get) == 0:
    print("YES")
else:
    print("NO")