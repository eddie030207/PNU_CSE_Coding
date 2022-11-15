import numpy as np

def depend(arr):
    lenlist = []
    arr = ''.join(str(_) for _ in arr).split("0") #0을 기준으로 분리하고 join하기
    for i in range(len(arr)):
        lenlist.append(len(arr[i])) #lenlist에 arr의 각 원소의 길이만큼을 append 
    result = (max(lenlist), lenlist.count(max(lenlist))) 
    if result[0] == 0: #만약 일차원 리스트의 모든 원소가 0이라면 (0, 0) 튜플 출력
        return (0, 0)
    return result

arr = []
revarr = []
dia = []
result = 0
while True:
    try : line = list(map(int, input()))
    except : break
    arr.append(line)

arr = np.array(arr)
revarr = arr[:, ::-1] #반대로 뒤집은것 (좌우)

for i in range(len(arr)): #세로축 길이
    dia.append(depend(np.diag(arr, -i)))
    dia.append(depend(np.diag(revarr,- i)))
    dia.append(depend(arr[i]))

for i in range(len(arr[0])): #가로축 길이
    dia.append(depend(arr[:, i]))

for i in range(1,len(arr[0])): #각 끝점이 revarr 과 arr를 돌때 중복되므로 i를 1부터 시작하여 중복을 방지(세로와 가로 diag를 돌때 중복이 생김 세로에서 이미 끝점 diag를 확인했으므로 가로에서는 1부터 시작하는 것임)
    dia.append(depend(np.diag(arr, i)))
    dia.append(depend(np.diag(revarr, i)))
dia.sort(reverse=True) #내림차순으로 정렬

for i in range(len(dia)): #만약 내림차순으로 정렬된 sort의 첫번째 튜플의 첫번쨰 원소와 dia의 i번쨰 튜플의 첫번째 원소와 같다면, i번째 튜플의 두번째 원소를 result에 더함. 
    if dia[i][0] == dia[0][0]:
        result += dia[i][1]
print(dia[0][0], result) 
