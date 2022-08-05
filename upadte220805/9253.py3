import sys
a= sys.stdin.readline()[:-1] 
b= sys.stdin.readline()[:-1]
c= sys.stdin.readline()[:-1] 
print('YES') if (-1!=a.find(c))&(-1!=b.find(c)) else print('NO')