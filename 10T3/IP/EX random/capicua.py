n=int(input())
origin=n
inver=0
while n>0:
    dig=n%10
    inver=inver*10+dig
    n=n//10
if origin==inver:
    print("SIM")
else:
    print("NAO")