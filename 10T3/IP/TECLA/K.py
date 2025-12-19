d=input()
t=input()
v=int(input())
x=int(input())

if d=="Km":
    v=v*1000
if t=="seg":
    x=x/3600

time=(x/v)*60

horas=int(time//60)
time-=horas*60
minutos=int(time)
time-=minutos
segundos=int(((time*60)/100)*100)


print("{0:01d}:{1:02d}:{2:02d}".format(horas,minutos,segundos))

