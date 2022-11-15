contents = []
while True:
    try : line = list(map(int, input().split()))
    except : break
    line.reverse()
    contents.append(line)

def calculate(f, g):
    result = [0 for _ in range(len(f) + len(g) - 1)]
    for i in range(len(f)): 
        for j in range(len(g)): 
            result[i+j] += f[i]*g[j]
    return result

h=[1]

for i in range(len(contents)):
    h = calculate(h, contents[i])

h.reverse()

if set(h) == {0} :
    print("0")
else :
    for i in h:
        print(i, end = " ") 


