'''
n=int(input())
notas=[]
max_nota=[]
melhor_nota=-9999
x=0
for i in range(n):
    notas.append(float(input()))
media=sum(notas)/n
print("MEDIA:",media)
print("NOTA SUPERIOR A MEDIA:")
for i in range(n):
    if notas[i]>media:
        print(i+1)
print("MELHORES NOTAS:")
for i in range(n):
    if notas[i]>melhor_nota or notas[i]==melhor_nota:
        if sum(max_nota)>0 and notas[i]!=melhor_nota:
            max_nota.pop(0)
            x=x-1
        melhor_nota=notas[i]
        max_nota.append(i+1)
        x+=1
for i in range(x):
    print(max_nota[i])
'''
n=int(input())
soma=0
maior_nota=0
notas=[]
for i in range(n):
    nota=float(input())
    soma+=nota
    notas.append(nota)
    if nota>maior_nota:
        maior_nota=nota
media=sum(notas)/n
print("MEDIA:",media)
print("NOTA SUPERIOR A MEDIA:")
for i in range(n):
    if notas[i]>media:
        print(i+1)
print("MELHORES NOTAS:")
for i in range(n):
    if notas[i]==maior_nota:
        print(i+1)