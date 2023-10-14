T = int(input())
l = []
for i in range(T):
    n = int(input())
    if n not in l:
        l.append(n)
print(len(l)*len(l))

