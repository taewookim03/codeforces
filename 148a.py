p = [int(input()) for i in range(4)]
#print(sum([(lambda x: any(not x%j for j in p))(x) for x in range(1, int(input())+1)]))
print(sum(map(lambda x: any(x%j == 0 for j in p), range(1, int(input())+1))))