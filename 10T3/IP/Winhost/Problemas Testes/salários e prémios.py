n=int(input())
salario_max=-9999
N_premio_5=0
soma=0
for i in range(n):
    nome=input()
    salario=float(input())
    if salario>=1000:
        salario=salario*1.05
        N_premio_5=N_premio_5+1
    elif salario>=800:
        salario=salario*1.08
    elif salario>=500:
        salario=salario*1.1
    if salario>salario_max:
        salario_max=salario
        nome_salario_max=nome
    soma=soma+salario
    print("{0:.2f}".format(salario))
media_salario=soma/n
print(nome_salario_max)
print(N_premio_5)
print("{0:.2f}".format(media_salario))