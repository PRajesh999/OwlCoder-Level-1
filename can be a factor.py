T = int(input())
for i in range(T):
    a,b = map(int,input().split())
    if b%a == 0 or a*2<b:
        print("YES")
    else:
        print("NO")

