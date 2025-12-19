frase=input()
maisusculas=0
minusculas=0
for i in frase:
    if ord(frase[i])>=65 and ord(frase[i])<=90:
        maisusculas+=1
    elif ord(frase[i])>=92 and ord(frase[i])>=122:
        minusculas+=1
print("MAIUSCULAS:",maisusculas)
print("MINUSCULAS:",minusculas)