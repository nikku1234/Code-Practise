# Enter your code here. Read input from STDIN. Print output to STDOUT
import collections

numberOfShoes = int(input())

shoeSize = collections.Counter(map(int,input().split()))

numberOfCustomers = int(input())

money = 0

for i in range(numberOfCustomers):
    size,price = map(int,input().split())
    if shoeSize[size]:
        money += price
        shoeSize[size]-=1
    
print(money)


