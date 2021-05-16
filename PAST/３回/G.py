from collections import deque

N,X,Y = list(map(int, input().split()))
Z=201
sy, sx = 0, 0
gx, gy = X, Y

X += Z
Y += Z
sy += Z
sx += Z
gx += Z
gy += Z

#壁情報
F = []
for _ in range((Z*2+2)):
    F.append(["."]*(Z*2+2))

for _ in range(N):
    bx, by = list(map(int, input().split()))

    bx += Z
    by += Z
    #壁情報
    F[bx][by] = "#"

#始点からの移動距離と来訪（−１なら未来訪）を管理する２次元配列
dist = []
for i in range((Z*2+2)):
    dist.append([-1] * (Z*2+2))

#探索キュー
Q = deque()
#start情報：頂点
Q.append([sx, sy])
#start情報：距離
dist[sx][sy] = 0

while (len(Q) > 0):
    x, y = Q.popleft()
    for ix, iy in ([x + 1, y + 1], [x, y+1], [x-1, y+1], [x+1, y], [x-1, y], [x, y-1]):
        if not ((0 <= ix < (Z*2+2)) and (0 <= iy < (Z*2+2))):
            continue

        if F[ix][iy] == "#":
            continue

        if dist[ix][iy] == -1:
            dist[ix][iy] = dist[x][y] + 1
            # if ix==gx and iy ==gy:
            #     print(dist[gx][gy])
            #     break
            Q.append([ix,iy])

print(dist[gx][gy])