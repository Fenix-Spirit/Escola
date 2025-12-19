
n_alunos=int(input())
n_disciplinas=int(input())
notas=[]
medias=[]
n_max_nota=0
for i in range(n_alunos):
    nota=[]
    nota=list(map(int,input().split()))
    notas.append(nota)
print(*notas)
for i in range(n_alunos):
    soma=0
    for k in range(n_disciplinas):
        soma+=notas[i][k]
    media=soma/n_disciplinas
    medias.append(media)
    if media>15:
        print("{0:.2f}".format(media))
for i in range(n_alunos):
    a=max(medias)
    if medias[i]==a:
        print(i+1)
        n_max_nota+=1
print(n_max_nota)