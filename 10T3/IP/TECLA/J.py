x1,y1=map(int,input().split())
x2,y2=map(int,input().split())
raio=int(input())

if (x1-x2)**2+(y1-y2)**2>raio**2:
    print(0)
elif (x1-x2)**2+(y1-y2)**2<raio**2:
    print(1)
else :
    print(0)