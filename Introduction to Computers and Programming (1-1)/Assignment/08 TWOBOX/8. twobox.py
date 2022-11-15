def null(a, b) :
    # x축 이탈
    if a[2] < b[0] or a[0] > b[2] : return "NULL"
    # y축 이탈
    if a[1] > b[3] or a[3] < b[1] : return "NULL"

def point(a, b) : 
    # 좌상
    if a[0] == b[2] and a[3] == b[1] : return "POINT"
    # 우상
    if a[2] == b[0] and a[3] == b[1] : return "POINT"
    # 좌하
    if a[0] == b[2] and a[1] == b[3] : return "POINT"
    # 우하
    if a[2] == b[0] and a[1] == b[3] : return "POINT"

def line(a, b) : 
    # 세로선이 겹친 경우 (좌, 우)
    if a[0] == b[2] or a[2] == b[0] : return "LINE"
    # 가로선이 겹친 경우 (상, 하)
    if a[3] == b[1] or a[1] == b[3] : return "LINE"

for _ in range(4):
    square = list(map(int, input().split()))
    sq_1 = list(square[:4]) 
    sq_2 = list(square[4:])
    
    if   null(sq_1, sq_2)  == "NULL"  : print("NULL")
    elif point(sq_1, sq_2) == "POINT" : print("POINT")
    elif line(sq_1, sq_2)  == "LINE"  : print("LINE")
    else :                              print("FACE")
