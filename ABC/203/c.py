# from collections import Counter
N, K = map(int, input().split())
# C = Counter()
A = []
for _ in range(N):
    a, b = map(int, input().split())
    A.append([a,b])

goal = K

A.sort()
for i in range(N):
    if A[i][0] <= goal:
        goal += A[i][1]

print(goal)


