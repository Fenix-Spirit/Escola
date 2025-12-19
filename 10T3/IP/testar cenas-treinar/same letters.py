a,b=map(str,input("escreve duas palavras com o mesmo nºde letras:").split())
if len(a) != len(b):
    print("tamanhos diferentes!")
    quit()
comprimento=len(a)
lista_a=[]
lista_b=[]
for i in range(comprimento):
    lista_a.append(a[i])
for i in range(comprimento):
    lista_b.append(b[i])
lista_a.sort()
lista_b.sort()
if lista_a==lista_b:
    print("As palavras têm as mesmas letras mas em posições diferentes")
else:
    print("As palavras não têm as mesmas letras")