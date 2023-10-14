n=int(input())
a = str(n)
c = 0 
for i in a:
    b = int(i)
    if b!=0 and n%b == 0:
        c += 1
print(c)

