px,py=map(int,input().split())
bit=0
bit1=0
x1,y1=map(int,input().split())
x2,y2=map(int,input().split())


if x1>x2:
    if px>x2 and px<x1:
        bit=1
else :
    if px>x1 and px<x2:
        bit=1

if y1>y2:
    if py>y2 and py<y1:
        bit1=1
else :
    if py>y1 and py<y2:
        bit1=1

if bit==1 and bit1==1:
    print("1")
else :
    print("0")
