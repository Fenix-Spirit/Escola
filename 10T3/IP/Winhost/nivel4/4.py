n=int(input())
nome=[]
nota=[]
maxn=-9999
for i in range(n):
    nome.append(input())
    nota.append(int(input()))
for i in range(n):
    if nota[i]>maxn:
        maxn=nota[i]
        posicao=i
for i in range(n):
    if nota[i]==maxn:
        print("Melhor nota foi", nota[posicao], "do(a)",nome[i])