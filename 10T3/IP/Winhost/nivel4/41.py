n_linhas=int(input())
n_colunas=int(input())
notas=[]
for i in range(n_linhas):
    nota=list(map(int,input().split()))
    media=int(sum(nota)/n_colunas)
    nota.append(media)
    notas.append(nota)
for i in range(n_linhas):
    for j in range(n_colunas):
        print(notas[i][j], end=" ")
    print(notas[i][j+1])
for i in range(n_linhas):
    if notas[i][n_colunas]<10:
        print("Sem nível")
    elif notas[i][n_colunas]<14:
        print("Satisfaz")
    elif notas[i][n_colunas]<17:
        print("Bom")
    elif notas[i][n_colunas]<=20:
        print("Muito Bom")
maximo=max(notas)
mais=max(maximo)
for i in range(n_linhas):
    for j in range(n_colunas):
        if notas[i][j]==mais:
            print(i,j)