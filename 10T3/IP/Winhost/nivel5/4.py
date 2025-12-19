txt=input()
txt_v2=txt.split()
ultimo=txt_v2[-1]
conectores=["da","de","e","dos","das","do"]
novo=""
for i in range(1,len(txt_v2)-1):
    if txt_v2[i] not in conectores:
        novo+=" "+txt_v2[i][0]+"."
print(ultimo,", ",txt_v2[0]+novo,sep="")