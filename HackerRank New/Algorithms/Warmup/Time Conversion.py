#!/bin/python

from __future__ import print_function

import os
import sys
from datetime import datetime

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    #
    # Write your code here.
    #

    return datetime.strptime(s, "%I:%M:%S%p").strftime("%H:%M:%S")

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()
