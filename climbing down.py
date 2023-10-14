a,b,x,y = map(int,input().split())
c = (a-0)/x
d = (b-0)/y
if c<d:
    print("Walter")
elif d<c:
    print("Jesse")
else:
    print("Both")

