def is_digit(char):
    return '0' <= char <= '9'
s = input()

current_number = 0  
total_sum = 0      
for char in s:
    if is_digit(char):
        current_number = current_number * 10 + int(char)
    else:
        total_sum += current_number
        current_number = 0
total_sum += current_number
print(total_sum)

