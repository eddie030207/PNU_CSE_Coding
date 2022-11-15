def triangleType(a, b, c):
    sa = pow(a, 2)
    sb = pow(b, 2)
    sc = pow(c, 2)
    
    if (a + b <= c):
            print("0")
    elif (sc == sa+sb):
            print("1")
    elif (sc > sa+sb):
            print("2")
    elif (sc < sa+sb):
            print("3")

numbers = list(map(int, input().split()))
numbers.sort()

a = numbers[0]
b = numbers[1]
c = numbers[2]

triangleType(a, b, c)

