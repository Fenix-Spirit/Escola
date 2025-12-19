texto = input()

alfa = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]

rever = ["E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","A","B","C","D"]

novo = ""
text = ""

for i in range(len(texto)):
    if texto[i] not in " ":
        text += texto[i]

for i in range(len(text)):
    for k in range(25):
        if text[i] == alfa[k]:
            novo += rever[k]
print(novo)