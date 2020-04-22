# Enter your code here. Read input from STDIN. Print output to STDOUT

from collections import defaultdict

n, m = map(int,input().split())
d = defaultdict(list)
#print(n,m)
lis = []

for i in range(0,n):
    d[input()].append(i+1)

for _ in range(m):
    lis.append(input())
for x in lis:
    if x in d:
        print(' '.join(map(str,d[x])))
    else:
        print(-1)

