n = int(input())
l = list(map(int,input().split()))
a = (n*(n+1))//2
b = 0
for i in range(0,len(l)):
    b += l[i]
c = a-b
print(c)

