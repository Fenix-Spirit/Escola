n=int(input())
lista=[]
matriz=[]
soma=0
bit=0
for i in range(n+1):
    soma+=i


for i in range(n):
    lista=list(map(int,input().split()))
    if sum(lista)!=soma:
        bit=1
    matriz.append(lista)


for j in range(n):
    total=0
    for i in range(n):
        total+=matriz[i][j]

    if total!=soma:
        bit=1


if bit==0:
    print("VERDADEIRO")
else :
    print("FALSO")