n = int(input())
l = list(map(int,input().split()))
l.sort()
a = 0
for i in range(0,len(l),2):
    a += l[i]
print(a)

