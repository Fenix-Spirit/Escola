idade=[]
peso=[]
n_adultos=0
n_kids=0
while True:
    if 0 in idade:
        break
    idade.append(int(input()))
for i in range(len(idade)):
    if idade[i]>=18:
        peso.append(75)
        n_adultos+=1
    elif idade[i]>0:
        peso.append(45)
        n_kids+=1
print("No aviao viajam",n_adultos,"adulto(s) e",n_kids,"nao adulto(s)")
print("O peso estimado e de",sum(peso),"kg")