with open("genome.txt") as file:
    genome = file.read().replace('\n', '')

Start = list(input().split())
End = list(input().split())
st_list = []
ed_list = []
result = []

def depend_st(Si) :
    for i in range(len(genome) - len(Si) + 1) : 
        start_len = genome[i : i + len(Si)]
        if start_len == Si : st_list.append((i, i + len(Si)))

def depend_ed(Ei) :
    for i in range(len(genome) - len(Ei) + 1) : 
        end_len = genome[i : i + len(Ei)]
        if end_len == Ei : ed_list.append((i, i + len(Ei)))

for i in Start :
    depend_st(i)

for i in End :
    depend_ed(i)

st_list.sort(key = lambda x : x[0])
ed_list.sort(key = lambda x : x[0])

for i in range(len(st_list)) :
    for j in range(len(ed_list)) :
        dep_valid = True
        if st_list[i][1] > ed_list[j][0] : continue
        for a in range(len(st_list)) :
            if i == a : continue
            if st_list[i][0] + 1 <= st_list[a][0] and ed_list[j][1] -1 >= st_list[a][1] : 
                dep_valid = False 
                break
        for b in range(len(ed_list)) :
            if j == b : continue
            if st_list[i][0] + 1 <= ed_list[b][0] and ed_list[j][1] -1 >= ed_list[b][1] : 
                dep_valid = False 
                break
        if dep_valid == True :
            result.append(genome[st_list[i][0] : ed_list[j][1]])
                    
result.sort(key = lambda x : len(x)) 

if len(result) == 0 : print("None")
else:
    ans = result[0]
    for i in range(len(result)) :
        cmp = result[i]
        if len(cmp) <= len(ans) and cmp < ans:
            ans = cmp
    print(ans)

