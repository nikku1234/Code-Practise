# Enter your code here. Read input from STDIN. Print output to STDOUT

n,a1 = (int(input()),input().split())
m,b1 = (int(input()),input().split())
a = set(a1)
b = set(b1)
p=b.difference(a)
q=a.difference(b)
r=p.union(q)
print ('\n'.join(sorted(r, key=int)))

