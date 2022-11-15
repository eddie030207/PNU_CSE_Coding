import re
str = input()
number = re.sub(r"\D", '', str)
k = len(number)
c = list(range(k-1))

sum = 0    
score = 0

for i in range (k-1) :
    condition = int(number[i]) - int(number[i+1])
    if condition == 0 :
        c[i] = 'e'
    elif condition == 1 :
        c[i] = 'd'
    elif condition == -1 :
        c[i] = 'u'
    else:
        c[i] = 'n'

if c[0] == 'n' : score = 0
else : 
    score = 1  
    sum += 1

for j in range(1 , k-1) :
    if c[j] == 'n' : score = 0
    elif c[j] == c[j-1] :   
        score += 1
        sum += score
    else:
        score = 1
        sum += score
for i in str:
    if not i.isdigit() : sum = -1
print(sum)
