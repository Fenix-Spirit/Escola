txt=input()
for i in range(65,91):
    if chr(i) in txt:
        print(chr(i),"-",txt.count(chr(i)))