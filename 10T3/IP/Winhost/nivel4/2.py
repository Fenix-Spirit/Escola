n=int(input())
lista=[]
soma=0
cont=0
for i in range(n):
    lista.append(int(input()))
for x in range(n):
    if x%2==1:
        soma+=lista[x]
        cont+=1
media=soma/cont
print("A media e {0:.2f}".format(media))