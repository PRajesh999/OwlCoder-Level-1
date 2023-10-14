def vowel_consonant_sequence(s):
    output = []
    c_c = False
    c_v = False

    for char in s:
        if char in 'aeiou':
            if not c_v:
                output.append('V')
                c_v = True
                c_c = False
        else:
            if not c_c:
                output.append('C')
                c_c = True
                c_v = False

    return ''.join(output)

# Input
s = input()

# Generate and print the vowel-consonant sequence
result = vowel_consonant_sequence(s)
print(result)

