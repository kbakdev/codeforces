vowels = ['a', 'e', 'i', 'o', 'u', 'y']

i = input()
i = i.lower()
i = list(i)
for j in range(len(i)):
    if i[j] in vowels:
        i[j] = ""
    else:
        i[j] = "." + i[j]

i = "".join(i)
print(i)