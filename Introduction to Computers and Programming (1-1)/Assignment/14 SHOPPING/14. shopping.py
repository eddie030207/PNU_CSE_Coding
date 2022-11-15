import fractions

def similarity(a, b):
    formula = fractions.Fraction(len(a & b) / (len(a | b) + 1))
    return formula

contents = []
name = []
while True:
    try : line = list(input().split())
    except : break
    if line[0] in name :
        for i in range(len(contents)) :
            if contents[i][0] == line[0] :
                a = i           
        for i in line[1:]:
            contents[a].append(i)
    else : 
        contents.append(line)
        name.append(line[0])
contents.sort()

similar = []
for i in range(len(contents)) :
    for j in range(len(contents)) :
        if i >= j : continue
        similar.append(similarity(set(contents[i][1:]), set(contents[j][1:])))

similar.sort(reverse = True)       
x = similar[0]   
answer = []

for i in range(len(contents)) :
    for j in range(len(contents)) :
        if i >= j : continue
        if x == similarity(set(contents[i][1:]), set(contents[j][1:])):
            answer.append(sorted([contents[i][0], contents[j][0]]))

for i in range(len(answer)):
    print(answer[i][0], answer[i][1])