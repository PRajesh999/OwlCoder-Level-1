n=int(input())
a=str(n)
c=0
for i in a:
    if i.isdigit():
        d=int(i)
        if(d!=0 and n%d==0):
            c+=1
print(c)
