n=int(input())


for i in range(1000):
    for j in range(100):
        if i*2**j==n:
            print(i,j)
            exit()
