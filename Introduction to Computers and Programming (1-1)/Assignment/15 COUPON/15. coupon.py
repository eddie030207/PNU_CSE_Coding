k, limit = map(int, input().split())
menuprice = []
order = []
ans = []
for _ in range(k): menuprice.append(int(input())) 

def depend(left_coupon, used, x):
    isUsed = False
    for i in range(x, k):
        if (left_coupon >= menuprice[i]) and not (i+1 in used):
            isUsed = True
            used.append(i+1)
            depend(left_coupon - menuprice[i], used, i+1)
            used.pop()
    if isUsed == False:
        for i in range(k):
            if i+1 not in used and menuprice[i] <= left_coupon: return 
        if sorted(used) in order: return
        order.append(used[:])

for i in range(k):
    if menuprice[i] <= limit: depend(limit - menuprice[i], [i+1], i+1)

for i in range(len(order)): print(*order[i])
