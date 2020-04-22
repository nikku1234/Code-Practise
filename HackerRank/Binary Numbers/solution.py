#!/bin/python3

import math
import os
import random
import re
import sys



def binary(number):
    count = 0
    max_count = count
    while number>0:
        rem = int(number%2)
        #print(rem)
        number = number/2
        if rem == 1:
            count+=1
        else:
            count = 0
        if count>max_count:
            max_count = count
        
    return max_count

if __name__ == '__main__':
    n = int(input())
   
    print(binary(n))

