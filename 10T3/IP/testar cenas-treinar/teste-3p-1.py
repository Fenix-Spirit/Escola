n=int(input())
numeros=[]
n1=0
n2=0
n3=0
for i in range(n):
    numero=input()
    numeros.append(numero)
for i in range(n):
    if numeros[i][1]==str(1):
        n1+=1
    elif numeros[i][1]==str(2):
        n2+=1
    elif numeros[i][1]==str(3):
        n3+=1
print(n1,n2,n3)
if n1>n2 and n1>n3:
    print("91")
elif n2>n1 and n2>n3:
    print("92")
elif n3>n2 and n3>n1:
    print("93")