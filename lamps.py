n,k,x,y = map(int,input().split())
a=n-k
if(x>y):
    print((k*x)+(a*y))
else:
    print((k*x)+(a*x))

