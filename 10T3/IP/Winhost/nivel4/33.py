n_linhas=int(input())
n_colunas=int(input())
matriz=[]
soma=0
for i in range(n_linhas):
    linha=[]
    linha=list(map(int,input().split()))
    matriz.append(linha)
for i in range(n_linhas):
    for k in range(n_colunas-1):
        print(matriz[i][k],end=" ")
    print(matriz[i][k+1])
for i in range(n_linhas):
    for k in range(n_colunas):
        if (matriz[i][k])>=10:
            soma+=matriz[i][k]
print(soma)