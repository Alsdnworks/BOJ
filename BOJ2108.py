from collections import Counter
l=sorted([int(input())for _ in range(int(input()))])
v=Counter(l).most_common()
print('%d\n%d\n%d\n%d'%(round(sum(l)/len(l),0),l[len(l)//2],v[0][0] if len(v)==1 or v[0][1]!=v[1][1] else v[1][0],l[-1]-l[0]))