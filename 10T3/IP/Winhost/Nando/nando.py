n=int(input())
nota=[]
soma=0
maxn=-9999
for i in range (n):
    nota.append(float(input()))
    soma+=nota[i]
media=soma/n
print("MEDIA:{0:.1f}".format(media))
print("NOTA SUPERIOR A MEDIA:")
for i in range(n):
    if nota[i]>media:
        print(i+1)
print("MELHORES NOTAS:")
for i in range(n):
    if nota[i]>maxn:
        maxn=nota[i]
print(maxn)