texto=input().split()
texto.sort(key=len,reverse=True)
print(texto[0])