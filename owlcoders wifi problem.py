a,b=map(int,input().split())
s=input()
count_of_0=0
count_of_1=0
for i in s:
    if i=="1":
        count_of_1+=1
    else:
        count_of_0+=1
if (count_of_1*b)<=(count_of_0) or a<b:
    print(0)
else:
    print(1)

