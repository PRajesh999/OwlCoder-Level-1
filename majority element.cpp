n = int(input())
l = list(map(int,input().split()))
for i in l:
    if l.count(i)>n//2:
        print(i)
        break
else:
    print('-1')

