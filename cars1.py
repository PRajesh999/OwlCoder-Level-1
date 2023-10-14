n1=int(input())
n2=int(input())
x=int(input())
car1=x
car2=0
if n1>=n2:
    print(-1)
else:
    count=1
    while(1):
        car1+=n1
        car2+=n2
        if car2>car1:
            print(count)
            break
        else:
             count+=1

