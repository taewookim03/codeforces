n, k = map(int, input().split())
if k > (n+1)//2:
    a = 2*(k-(n+1)//2)
else:
    a = 2*k - 1
print(a)