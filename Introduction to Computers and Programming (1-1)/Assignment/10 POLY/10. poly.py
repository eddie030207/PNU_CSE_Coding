f = list(map(int, input().split()))
g = list(map(int, input().split()))
f.reverse(), g.reverse()

def calculate(f, g):
    result = [0 for _ in range(len(f) + len(g) - 1)]
    for i in range(len(f)):
        for j in range(len(g)):
            result[i+j] += f[i]*g[j]
    result.reverse()
    return result

result = calculate(f, g)
for i in result:
    print(i, end = " ")

