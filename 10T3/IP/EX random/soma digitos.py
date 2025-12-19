n=int(input())
soma=0
for i in range(n):
    soma+=n%10
    n=n//10
print(soma)