# Enter your code here. Read input from STDIN. Print output to STDOUT

from collections import namedtuple


n = int(input())
categories = input().split()

Student = namedtuple('Student',categories)
marks = [int(Student._make(input().split()).MARKS) for _ in range(n)]
print((sum(marks) / len(marks)))

