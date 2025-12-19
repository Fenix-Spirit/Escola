o,p,ai,d=map(int,input().split())
if o>p:
    o_p=1
elif o<p:
    o_p=0
if o>ai:
    o_ai=1
elif o<ai:
    o_ai=0
if p>ai:
    p_ai=1
elif p<ai:
    p_ai=0
def circular():
    if ai<0:
        ai=15
    elif ai>16
        ai=0
#n completo