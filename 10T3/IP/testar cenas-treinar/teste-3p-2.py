txt=input().split()
palavra=input()
maior_palavra=0
palavras_maior=[]
for i in range(len(txt)):
    if txt[i]==palavra:
        print(i)
for i in range(len(txt)):
    if len(txt[i])==maior_palavra:
        palavras_maior.append(txt[i])
    elif len(txt[i])>maior_palavra:
        palavras_maior.clear()
        maior_palavra=len(txt[i])
        palavras_maior.append(txt[i])
for i in range(len(palavras_maior)):
    print(palavras_maior[i])