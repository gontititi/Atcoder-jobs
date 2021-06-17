N, K = list(map(int, input().split()))
A = 50*K*(1 + N)*N
B = N*K*(1+K)/2
print(int(A+B))