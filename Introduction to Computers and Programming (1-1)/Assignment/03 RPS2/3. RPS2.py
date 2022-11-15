rps = input().split() 
RPS = set(rps) 

if RPS == {"R", "P"}:   
    print("P") 
elif RPS == {"R", "S"}:
    print("R")
elif RPS == {"S", "P"}:
    print("S")
else :
    print("D") 