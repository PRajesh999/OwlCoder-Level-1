T = int(input())
for _ in range(T):
    N = int(input())
    S = input()
    encoded_sequence = ""
    for i in range(0, N, 2):
        two_chars = S[i:i+2]
        if two_chars == "00":
            encoded_sequence += "A"
        elif two_chars == "01":
            encoded_sequence += "T"
        elif two_chars == "10":
            encoded_sequence += "C"
        elif two_chars == "11":
            encoded_sequence += "G"
    print(encoded_sequence)

