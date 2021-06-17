A, B, C = list(map(int, input().split()))

if B == C:
    print(A)
elif A == C:
    print(B)
elif A == B:
    print(C)
else:
    print(0)
