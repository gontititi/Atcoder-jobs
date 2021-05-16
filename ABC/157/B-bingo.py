#ビンゴカード
#配列初期化
A = []

#ビンゴ配列作成
for i in range(0,3):
    #１行読み取り
    row = list(map(int, input().split()))

    #読み取った１行をビンゴ配列に格納
    A.append(row)

#でた数がビンゴカードに存在するか判定する配列
M = []
for i in range(0,3):
    rows = [False,False,False]

    M.append(rows)

#数とびんごかーど判定
N = int(input())
for _ in range(0, N):
    b = int(input())

    for i in range(0,3):
        for j in range(0,3):
            if A[i][j] == b:
                M[i][j] = True


#ビンゴしたかどうか
bingo = False

#横
for i in range(0, 3):
    if M[i][0] and M[i][1] and M[i][2]:
        bingo = True

#縦
for i in range(0, 3):
    if M[0][i] and M[1][i] and M[2][i]:
        bingo = True

#斜
if M[0][0] and M[1][1] and M[2][2]:
    bingo = True

if M[2][0] and M[1][1] and M[0][2]:
    bingo = True

if bingo:
    print("Yes")
else:
    print("No")
