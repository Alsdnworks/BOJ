ca=input()
lc=len(ca)
for i in range(lc):
    mc=ca[i:]
    lm=len(mc)
    ref = mc[int(lm/2):][::-1] if lm%2==0 else mc[int(lm/2)+1:][::-1]
    if mc[:int(lm/2)]==ref:
        print(i+lc)
        break    
