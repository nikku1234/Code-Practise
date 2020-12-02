class Difference:
    def __init__(self, a):
        self.__elements = a

    # Add your code here

    def computeDifference(self):
        min_val = min(a)
        max_val = max(a)
        self.maximumDifference = max_val - min_val




# End of Difference class

_ = input()
a = [int(e) for e in input().split(' ')]

d = Difference(a)
d.computeDifference()

print(d.maximumDifference)
