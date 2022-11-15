dr = [-1, 0, 1, 0] #y
dc = [0, 1, 0, -1] #x

N, M = map(int, input().split())
snail = [[0]*N for _ in range(M)]

r, c = M-1, 0
dist = 0  

for n in range(1, N*M + 1):
    snail[r][c] = n
    r += dr[dist]
    c += dc[dist]
    if r < 0 or c < 0 or r >= M or c >= N or snail[r][c] != 0:
        r -= dr[dist]
        c -= dc[dist]
        dist = (dist + 1) % 4

        r += dr[dist]
        c += dc[dist]

for _ in range(4):
    depending_num = list(map(int, input().split()))
    if len(depending_num) == 1 :
        if depending_num[0] > N*M:
            print("0 0")
            continue

        for i in range(M):
            for j in range(N):
                if snail[i][j] == depending_num[0] :
                    print(f'{j+1} {M-i}')

    elif len(depending_num) == 2:
        if depending_num[0] > N or depending_num[1] > M:
            print("0 0")
            continue
        print(snail[M - depending_num[1]][depending_num[0] - 1])