x=int(input())
a,b,c=map(int,input().split())
d,e,f=map(int,input().split())
g,h,i=map(int,input().split())

if a==x and b==x and c==0:
    print("1 3")
elif a==x and c==x and b==0:
    print("1 2")
elif b==x and c==x and a==0:
    print("1 1")
elif d==x and e==x and f==0:
    print("2 3")
elif d==x and f==x and e==0:
    print("2 2")
elif e==x and f==x and d==0:
    print("2 1")
elif g==x and h==x and i==0:
    print("3 3")
elif g==x and i==x and h==0:
    print("3 2")
elif h==x and i==x and g==0:
    print("3 1")
elif a==x and d==x and g==0:
    print("3 1")
elif a==x and g==x and d==0:
    print("2 1")
elif d==x and g==x and a==0:
    print("1 1")
elif b==x and e==x and h==0:
    print("3 2")
elif b==x and h==x and e==0:
    print("2 2")
elif e==x and h==x and b==0:
    print("1 2")
elif c==x and f==x and i==0:
    print("3 3")
elif c==x and i==x and f==0:
    print("2 3")
elif f==x and i==x and c==0:
    print("1 3")
elif a==x and e==x and i==0:
    print("3 3")
elif a==x and i==x and e==0:
    print("2 2")
elif e==x and i==x and a==0:
    print("1 1")
elif g==x and e==x and c==0:
    print("1 3")
elif e==x and c==x and g==0:
    print("3 1")
elif c==x and g==x and e==0:
    print("2 2")
else :
    print("0")