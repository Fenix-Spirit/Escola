F=0
M=0
n=int(input())
for i in range(n):
    nome=input()
    genero=input()
    if genero=="F":
        F=F+1
    elif genero=="M":
        M=M+1
if F==M:
    print("Iguais")
elif F>M:
    print("F")
elif M>F:
    print("M")
percentagemF=(F/n)*100
percentagemM=(M/n)*100
print("F=",percentagemF,"%",sep="")
print("M=",percentagemM,"%",sep="")