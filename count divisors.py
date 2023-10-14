n = int(input())
a = [0] * (n + 1)
for i in range(1, n + 1):
    for j in range(i, n + 1, i):
        a[j] += 1
b = sum(a)
print(b)

