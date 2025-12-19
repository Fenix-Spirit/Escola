lista=list(map(str,input().split()))
lista_unique=[]
for i in range(len(lista)):
    if lista.count(lista[i])==1:
        lista_unique.append(lista[i])
print(*lista_unique)