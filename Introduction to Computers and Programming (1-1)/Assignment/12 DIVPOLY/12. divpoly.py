def polymulti(f, g):
    f.reverse(), g.reverse()
    result = [0 for _ in range(len(f) + len(g) - 1)]
    for i in range(len(f)):
        for j in range(len(g)):
            result[i+j] += f[i]*g[j]
    result.reverse()
    if set(result) == {0} : return [0]
    while True:
        if result[0] != 0 : break    
        else : result.remove(0)    
    return result

def polysub(U, result):
    U.reverse(), result.reverse()
    r = [0 for _ in range(len(U) + len(result) - 1)]
    for _ in range(len(U) - len(result)) : result.append(0)
    for i in range(len(U)) :  r[i] = U[i] - result[i]
    r.reverse()
    if set(r) == {0} : return [0]
    while True:
        if r[0] != 0 : break
        else : r.remove(0)    
    return r

def polydiv(U, g):
    f = []
    degree = len(U) - len(g)
    for i in range(degree + 1):
        quotient = U[i]//g[0]
        f.append(quotient)
        for k in range(len(g)):
            U[i+k] = U[i+k] - quotient*g[k]
    return f
        
U = list(map(int, input().split()))
g = list(map(int, input().split()))

f = polydiv(U[:], g[:])
r = polysub(U[:], polymulti(f[:], g[:]))

for i in f:
    print(i, end = " ")
print()
for i in r:
    print(i, end = " ")