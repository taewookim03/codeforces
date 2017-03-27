n = int(input())
print(["Oh, my keyboard!","I become the guy."][len(set(input().split()[1:]) | set(input().split()[1:])) == n])