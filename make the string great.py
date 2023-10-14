n = int(input())
s = input()
stack = []
for char in s:
    if stack and abs(ord(char) - ord(stack[-1])) == 32:
        stack.pop()  
    else:
        stack.append(char)  
result = ''.join(stack)
print(result)

