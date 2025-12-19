x1,y1,x2,y2=map(int,input().split())
x=[]
y=[]
n=int(input())
bit=0
bit1=0
for i in range(n):
    x3,y3=map(int,input().split())
    x.append(x3)
    y.append(y3)

cont=0

for i in range(n):
    if x1>x2:
        if x[i]>=x2 and x[i]<=x1:
             bit=1
    else :
        if x[i]<=x2 and x[i]>=x1:
            bit=1
    if y1>y2:
        if y[i]>=y2 and y[i]<=y1:
            bit1=1
    else :
        if y[i]<=y2 and y[i]>=y1:
            bit1=1
    if bit==1 and bit1==1:
        cont+=1
    bit=0
    bit1=0

print(cont)