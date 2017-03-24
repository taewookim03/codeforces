#greedy
input()
a = sorted(map(int, input().split()), reverse=True)
print(min(i for i in range(len(a)+1) if sum(a[:i]) > sum(a[i:])))