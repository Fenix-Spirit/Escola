A=int(input())
B=int(input())
C=int(input())
if A>0 and B>0 and C>0:
    if A<=B+C and B<=A+C and C<=B+A:
        print("SIM")
    else:
        print("NAO")
else:
    print("NAO")