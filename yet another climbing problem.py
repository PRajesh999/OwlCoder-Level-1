# Input the number of test cases
T = int(input())

# Iterate through each test case
for _ in range(T):
    X, Y = map(int, input().split())
    moves = 0
    while X >= Y:
        X -= Y
        moves += 1
    moves += X
    print(moves)

