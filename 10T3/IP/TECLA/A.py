hora=int(input())
if hora>=5 and hora<=7:
    print("madrugada")
elif hora >= 8 and hora <= 12:
    print("manha")
elif hora >= 13 and hora <= 19:
    print("tarde")
elif hora >= 20 or hora <= 4:
    print("noite")