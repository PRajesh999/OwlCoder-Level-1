n = input()
s = str(n)
l = 0
for i in range(len(s)-1,-1,-1):
    if int(s[i])%2!=0:
        l = s[:i+1]
        break
if l:
    print(l)
else:
    print(-1)

