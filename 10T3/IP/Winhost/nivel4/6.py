n=int(input())
numero=[]
for i in range(n):
    numero.append(int(input()))
for i in range(n):
    if numero[i]<0:
        numero[i]=0
    elif numero[i]>0:
        numero[i]=1
for i in range(n):
    print(numero[i])