n, m = map(int, input().split())
'''
i = 0
while n > 0:
    n -= 1
    i += 1
    if not i % m:
        n += 1
print(i)
'''
d = n*m//(m-1)
print(d - (d % m == 0))
