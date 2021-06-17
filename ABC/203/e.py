#N<=10^9であるため、マスの面積が大きい
#そのため幅優先探索等で全てをシミュレーションするのは時間がかかりすぎる
#ポーンの動きに注目する
#行 i かつ 列 j に属するマスを(i,j)
###自分のコマの下にコマがなければ下に移動
###右下にコマがある場合、右下に動く
###左下にコマがある場合、左下に動く
#S_i : i行に自分のコマが存在する集合

def main():
    from collections import defaultdict
    N, M = map(int, input().split())
    D = defaultdict(list)

    for _ in range(M):
        x, y = map(int, input().split())
        D[x].append(y)
    
    print("D:")
    print(D)

    S = {N}  # (0, N) のことです
    print("S")
    print(S)

    rows = sorted(D.keys())  # 黒のポーンが存在する行を、小さい順（上から順）にソートしたリストを得られます

    for row in rows:
        T_add = set()
        T_del = set()
        print("T_add")
        print(T_add)
        print("T_del")
        print(T_del)

        print("S:")
        print(S)

        for col in D[row]:
            if (col - 1) in S or (col + 1) in S:
                # 黒のポーン(row, col) の左上か右上から移動できます
                T_add.add(col)
            if col in S:
                # 黒のポーン(row, col) の真上からは移動できません
                T_del.add(col)

        # 先に削除をしないとダメです（黒のポーンの真上と右上がSに存在する場合を考えてみてください）
        for col in T_del:
            S.discard(col)  # removeではなくdiscardを使ったほうが安全です
        for col in T_add:
            S.add(col)

    print(len(S))  # 0になる場合もあります（M=1, (X_0, Y_0) = (1, N)など）


if __name__ == '__main__':
    main()

#辞書型配列{key:i行 value:自分のコマが存在する列}


# from collections import deque

# N, M = list(map(int, input().split()))

# F = []
# D = []

# for _ in range(2*N+1):
#     F.append(["."]*(2*N+1))
#     D.append([False]*(2*N + 1))

# for _ in range(M):
#     x,y = list(map(int, input().split()))
#     # x += -1
#     # y += -1
#     F[y][x] = "#"

# s_y, s_x = N, 0

# Q = deque()
# Q.append([s_y, s_x])
# D[s_y][s_x] = True

# while (len(Q) > 0):
#     y, x = Q.popleft()

#     iy, ix = y,x+1
#     if ((0 <= x <= (2*N-1)) and (0 <= y <= (2*N))) and F[iy][ix] == "." and D[iy][ix] == False:
#         D[iy][ix] = True
#         Q.append([iy,ix])
#         # print(D)

#     # for iy, ix in ([y+1, x+1], [y-1, x+1]):
#     iy, ix = y+1,x+1

#     if ((0 <= x <= (2*N-1)) and (0 <= y <= (2*N-1))) and F[iy][ix] == "#" and D[iy][ix] == False:
#         D[iy][ix] = True
#         Q.append([iy,ix])
#     # print(D)

#     iy, ix = y-1,x+1
#     if ((0 <= x <= (2*N-1)) and (1 <= y <= (2*N))) and F[iy][ix] == "#" and D[iy][ix] == False:
#         D[iy][ix] = True
#         Q.append([iy,ix])

# out= 0
# for _ in range(2*N + 1):
#     if D[_][2*N]:
#         out += 1

# print(out)


# # for _ in range(M):
# #     F[]




