alunomaisvelho=-9999
somaidades=0
F=0
M=0
n=int(input())
for i in range(n):
    nome=input()
    idade=int(input())
    genero=input()
    somaidades=somaidades+idade
    if idade>alunomaisvelho:
        alunomaisvelho=idade
        nomemaisvelho=nome
    if genero=="F":
        F=F+1
    elif genero=="M":
        M=M+1

