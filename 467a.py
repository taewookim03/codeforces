n = int(input())
print(sum([(lambda x: x[1] - x[0] >= 2)(list(map(int, input().split()))) for i in range(n)]))