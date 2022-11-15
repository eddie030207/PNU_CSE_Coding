for _ in range(4):
    xa, ya, za, xb, yb, zb, xc, yc, zc, xd, yd, zd= list(map(int,input().split()))

    def depending_axis(i1, i2, i3, i4) :
        #REVERSE(Considering case of size)
        if i1 > i3 :
            i1, i3 = i3, i1
            i2, i4 = i4, i2
        #Considering INTERSECTION    
        if   i2 < i3  : return 0
        elif i2 == i3 : return 1
        else          : return 2

    #Sorting result value of 3 dimension(axis) 
    return_add = sorted([depending_axis(xa, xb, xc, xd), depending_axis(ya, yb, yc, yd), depending_axis(za, zb, zc, zd)])
    if   return_add == [2, 2, 2] : print("VOL")
    elif return_add == [1, 2, 2] : print("FACE")
    elif return_add == [1, 1, 2] : print("LINE")
    elif return_add == [1, 1, 1] : print("POINT") 
    else                         : print("NULL")
    
