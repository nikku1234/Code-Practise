# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import OrderedDict

ordered_dic = OrderedDict()

n = int(input())

for i in range(n):
    name,space,count = input().rpartition(" ")
    ordered_dic[name] = ordered_dic.get(name,0) + int(count)

for item,quantity in ordered_dic.items():
    print(item,quantity)

