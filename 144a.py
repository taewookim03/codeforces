n = int(input())
a = list(map(int, input().split()))
print(a.index(max(a)) + a[-1::-1].index(min(a)) - (a.index(max(a)) > n-1-a[-1::-1].index(min(a))))