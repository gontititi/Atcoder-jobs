import math
t, N = map(int,input().split())
a = 100%t
if (100%t)==0:
        Q = (math.floor(100*N/t))+ N-1

else:
    Q = (math.floor(100*N/t))+ N
    # Q = (math.floor(100/t))*N + N+1

print(int(Q))

# import math3 

# t, N = map(int,input().split())
# Q = []
# Q.append(math.floor((100 + t) / 100 * 1))
# sum = 0
# diff = 0
# i = 2

# while(sum < N):

#     A = math.floor((100 + t) / 100 * i)
#     Q.append(A)
#     diff = Q[i-1] - Q[i-2] - 1
#     sum = sum + diff

#     i += 1

# print((N - (sum - diff)) + Q[-2])


