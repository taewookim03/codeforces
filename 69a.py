n = int(input())
print(["NO","YES"][all([not sum(c) for c in zip(*[map(int, input().split()) for r in range(n)])])])