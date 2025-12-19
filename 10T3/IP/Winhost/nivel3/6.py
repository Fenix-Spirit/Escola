n=int(input())
soma=0
for i in range(n):
    numero=int(input())
    soma=soma+numero
media=soma/n
print("{0:.2f}".format(media))