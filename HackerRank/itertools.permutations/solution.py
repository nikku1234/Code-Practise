# Enter your code here. Read input from STDIN. Print output to STDOUT

from itertools import permutations

string,num = input().split()

print(*[''.join(i) for i in permutations(sorted(string),int(num))],sep="\n")


