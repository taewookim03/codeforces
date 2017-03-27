n = int(input())
a = list(map(int, input().split()))
count = maxCount = 0

for i in range(n):
    if i != 0 and a[i] >= a[i-1]:
        count += 1
    else:
        count = 1
    maxCount = max(maxCount, count)

print(maxCount)