n = int(input())
v = list(map(int, input().split()))

c = [[0] + v, [0] + sorted(v)]

for i in range(1, n+1):
    c[0][i] += c[0][i-1]
    c[1][i] += c[1][i-1]

m = int(input())
for _ in range(m):
    t,l,r = map(int, input().split())
    print(c[t-1][r] - c[t-1][l-1])
#print("\n".join(map(str, (c[t-1][r] - c[t-1][l-1] for t,l,r in ((map(int, input().split()) for _ in range(m)))))))