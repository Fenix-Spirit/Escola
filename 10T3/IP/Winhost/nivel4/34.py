n_linhas=int(input())
n_colunas=int(input())
matriz=[]
for i in range(n_linhas):
    linha=[]
    linha=list(map(int,input().split()))
    matriz.append(linha)
    soma_linha=sum(linha)
    print("A soma da linha {0} e {1}".format(i+1,soma_linha))
for k in range(n_colunas):
    soma_coluna=0
    for i in range(n_linhas):
        soma_coluna=soma_coluna+matriz[i][k]
    print("A soma da coluna {0} e {1}".format(k + 1, soma_coluna))