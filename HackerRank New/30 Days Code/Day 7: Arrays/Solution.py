#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    for i in range(int(len(arr))-1,-1,-1):
        print(arr[i],end=" ")
    # for i in range(0,int(len(arr)/2)):
    #     temp = arr[i]
    #     arr[i] = arr[len(arr)-(i+1)]
    #     arr[len(arr)-(i+1)] = temp
    # result = ""

    # result = ' '.join(str(x) for x in arr)
    # print(result)
