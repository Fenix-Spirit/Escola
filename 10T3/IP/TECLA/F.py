ano=int(input())

if ano%4==0 and ano%100!=0 or ano%400==0:
    print("1")
else :
    print("0")