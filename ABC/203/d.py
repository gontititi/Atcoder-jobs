N, K = list(map(int, input().split()))

H = []
for _ in range(N):
    h = list(map(int, input().split()))
    H.append(h)
if K%2 == 0:
    point = int(K*K/2-1)
else:
    point = int(K*K//2)

A = []
TYU = []
for i in range(N-(K-1)):
    for j in range(N-(K-1)):
        #中央値出す
        A = []
        tyu = 0
        for s in range(K):
            for t in range(K):
                a = H[i+s][j+t]
                A.append(a)
        #高さまとめて整列
        A.sort()
        
        #中央値?
        tyu = A[point]
        TYU.append(tyu)
        
TYU.sort()
print(TYU[0])
