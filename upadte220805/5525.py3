import sys as s
c = 0
mc=0
n,m,s=[s.stdin.readline().strip() for _ in range(3)]
ioi="IOI"+"OI"*(int(n)-1)
for i in range(int(m)):
    if (s[i]=='I'):
        if (s[i+1:i+3]=='OI'):
            mc+=1
            if mc==int(n):
                c+=1
                mc-=1
        else :
            mc=0
print(c)