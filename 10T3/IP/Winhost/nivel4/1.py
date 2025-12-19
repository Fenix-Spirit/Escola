n=int(input())
lista=[]
soma=0
produto=1
for i in range(n):
    lista.append(int(input()))
for x in range(n):
    soma=soma+lista[x]
    produto=produto*lista[x]
print(soma)
print(produto)