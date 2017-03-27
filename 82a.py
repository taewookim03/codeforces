import math
i = int(input())
interval = 2**(math.floor(math.log((i+4)//5, 2)))
begin = 5*(interval - 1) + 1
print(["Sheldon","Leonard","Penny","Rajesh","Howard"][(i - begin)//interval])


'''
n=int(input())-1
while n>4:n=n-5>>1
print("SLPRHheeaoeonjwlnneadaysror hdnd"[n::5])
'''