a1,a2=map(int,input().split())
b1,b2=map(int,input().split())
area_a=a1*a2
area_b=b1*b2
areas=[]
areas.append(area_a)
areas.append(area_b)
print(max(areas))