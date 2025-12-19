string=input()
lista_string_invertida=[]
for i in range(len(string)):
    if i!=len(string)-1:#verifica se n é a ultima letra da palavra
        print(string[i],end="__")
    else:
        print(string[i])
    lista_string_invertida.insert(0,string[i])
for i in range(len(lista_string_invertida)):
    print(lista_string_invertida[i],end="")
print()#new line
print("ola")