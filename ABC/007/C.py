from collections import deque

R, C = list(map(int, input().split()))
sy, sx = list(map(int, input().split()))
gy, gx = list(map(int, input().split()))

S = []
for _ in range(R):
    a = input()
    S.append(a)

sy -= 1
sx -= 1
gy -= 1
gx -= 1

#始点からの移動距離と来訪（−１なら未来訪）を管理する２次元配列
dist = []
for i in range(R):
    dist.append([-1] * C)

#キューを定義
Q = deque()
#始点
Q.append([sy, sx])
dist[sy][sx] = 0

while(len(Q) > 0):
    i, j = Q.popleft()
    for i2, j2 in [[i-1, j], [i+1, j], [i, j-1], [i, j+1]]:
        if not ( 0 <= i2 < R and 0 <= j2 < C):
            continue

        if S[i2][j2] == "#":
            continue

        #もし未来訪ならQに追加し、距離を追加する
        if dist[i2][j2] == -1:
            dist[i2][j2] = dist[i][j] + 1
            Q.append([i2, j2])

print(dist[gy][gx])
