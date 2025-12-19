n=int(input("Tamanho da sequencia:"))
n=n-2
anterior_1=int(input("1º número da sequência:"))
anterior_2=int(input("2º número da sequência:"))
atual=0
print(anterior_1)
print(anterior_2)
for i in range(n):
    atual=anterior_2+anterior_1
    print(atual)
    anterior_1=anterior_2
    anterior_2=atual