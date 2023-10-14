def prime(n):
    if n<2:
        return False
    c = 0
    for i in range(2,int(n**0.5)+1):
        if n%i == 0:
            return False
    return True
n = int(input())
p1 = 0
p2 = 0
for i in range(n+1,1000000):
    if prime(i) == 1:
        p2 = i
        break
for i in range(n-1,1,-1):
    if prime(i) == 1:
        p1 = i
        break
if abs(p1-n)<abs(p2-n):
    print(abs(p1-n))
else:
    print(abs(p2-n))

