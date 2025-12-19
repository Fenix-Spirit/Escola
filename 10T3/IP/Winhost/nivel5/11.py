string=input()
lista_string_invertida=[]
for i in range(len(string)):
    lista_string_invertida.insert(0,string[i])
for i in range(len(lista_string_invertida)):
    print(lista_string_invertida[i],end="")