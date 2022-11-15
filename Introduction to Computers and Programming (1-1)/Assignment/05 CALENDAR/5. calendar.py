month_num = int(input()) 
day_num = list(map(int,input().split())) 
first_day = input() 
weekList = list("Mon Tue Wed Thu Fri Sat Sun".split()) 

for _ in range(3) : 
    check_day1 = list(map(int,input().split())) 
    if check_day1[0] <= month_num and check_day1[1] <= day_num[check_day1[0]-1] :
        temp = sum(day_num[:check_day1[0]-1]) 
        temp += check_day1[1] - 1
        temp += weekList.index(first_day) 
        temp %= 7 
        print(weekList[temp])
    else :  
        print("None")