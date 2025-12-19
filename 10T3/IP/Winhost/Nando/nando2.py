#LER E IMPRIMIR MATRIZES
matriz=[]
n_linhas=int(input())
n_colunas=int(input())
for i in range(n_linhas):
    linha=[]
    linha=list(map(int,input().split()))
    matriz.append(linha)
for i in range(n_linhas):
    for k in range(n_colunas-1):
        print(matriz[i][k],end="")
#SOMARfor i in range(n_linhas):
    soma_linha=0
