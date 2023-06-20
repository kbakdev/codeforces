n = int(input())
flowers = list(map(int, input().split()))

min_flower = min(flowers)
max_flower = max(flowers)

min_count = flowers.count(min_flower)
max_count = flowers.count(max_flower)

if min_flower == max_flower:
    ways = n*(n-1)//2
else:
    ways = min_count * max_count

print(max_flower - min_flower, ways)
