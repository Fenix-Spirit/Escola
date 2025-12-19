texto=input()
novo=""
for i in range(len(texto)):
    if texto[i] not in novo:
        novo=novo + texto[i]
print(novo)