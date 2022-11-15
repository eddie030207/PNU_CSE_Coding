import string
inf_list = list(input().split("0"))
inf_list = ' '.join(inf_list).split()
ip = 0  
cmp = 0

for i in inf_list:
    ip = 0
    for j in i:
        if not j.isdigit():
               ip += ord(j) - 87
        else :
            ip += int(j)             
    if ip > cmp :
        cmp = ip
                        
print(cmp)