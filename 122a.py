n = int(input())
print(["NO","YES"][any(set(str(i)) <= set('47') and n%i == 0 for i in range(1, n+1))])