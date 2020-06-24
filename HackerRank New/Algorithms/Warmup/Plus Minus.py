#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    negative=0
    positive=0
    zero=0
    for i in arr:
        if(i<0):
            negative+=1
        elif(i==0):
            zero+=1
        else:
            positive+=1

    sum = negative+positive+zero
    print("%.5f"%(positive/sum))
    print("%.5f"%(negative/sum))
    print("%.5f"%(zero/sum))




if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
