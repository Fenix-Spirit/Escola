n=int(input())
x_anterior=0
for i in range(1,n+1):
    x=int(input())
    if x_anterior!=0:
        print(x-x_anterior)
    x_anterior=x