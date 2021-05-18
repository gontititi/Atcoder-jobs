import sys
sys.setrecursionlimit(1000000)

H, W = list(map(int, input().split()))

#フィールド（マップ）の状況を表す配列
MAP = []
for _ in range(H):
    m = input()
    MAP.append(m)

for i in range(H):
    for j in range(W):
        if MAP[i][j] == "s":
            sy, sx = i, j

        if MAP[i][j] == "g":
            gy, gx = i, j

visited = []
for _ in range(H):
    visited.append([False]*W)

def dfs(i, j):
    visited[i][j] = True

    for iy, ix in [[i+1, j], [i-1, j], [i, j+1], [i,j-1]]:
        if not (0 <= ix < W and 0<= iy < H):
            continue

        if MAP[iy][ix] == "#":
            continue

        if not visited[iy][ix]:
            dfs(iy, ix)

dfs(sy, sx)

if visited[gy][gx]:
    print("Yes")
else:
    print("No")


# #来訪を扱う配列
# visited = []

# for _ in range(W):
#     visited[i] = false

# def dfs(i):
#     visited(i) = True
    
#     for j in E[i]:
#         if not visited[j]:
#             dfs[j]

# #始点から呼び出す
# dfs(start)

