lista=list(map(int,input().split()))
lista.sort()
objetivo=int(input())
encontrado=False
def binary_search():
    if lista[len(lista) // 2] == objetivo:
        print("A posição é:", len(lista) // 2+1)
        global encontrado
        encontrado = True
    elif lista[len(lista) // 2] < objetivo:
        for i in range(len(lista) // 2):
            try:
                lista.pop()
            except:
                break
    elif lista[len(lista) // 2] > objetivo:
        for i in range(len(lista) // 2):
            try:
                lista.pop(0)
            except:
                break

while not encontrado:
    binary_search()
    if len(lista)<2 and encontrado==False:
        print("Não encontrado")
        exit()#n terminado