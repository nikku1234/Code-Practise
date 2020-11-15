#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the staircase function below.
def staircase(n):
    j=1;
    length = n
    for i in range(length):
        temp =length-j
        for k in range(temp):
            print(" ",end ="")
        for l in range(j):
            print("#",end ="")
        j=j+1
        print()
if __name__ == '__main__':
    n = int(input())

    staircase(n)
