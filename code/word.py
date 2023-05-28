word = input()
if sum(1 for c in word if c.isupper()) > sum(1 for c in word if c.islower()):
    print(word.upper())
else:
    print(word.lower())