def decimal(number):
    return number

'''def octal(number):
    if number<8:
        return number
    else:
        res = []
        while number>0:
            res.append(number%8)
            number = number/8
        return res[::-1]

def hexadecimal(number):


def binary(number):
    if number<2:
        return number
    else:
        res = []
        while number>0:
            res.append(number%2)
            number = number/2
        return res[::-1]



def print_formatted(number):
    # your code goes here
    for i in range(1,number+1):
        res_decimal = decimal(i)
        res_octal = octal(i)       
        #res_hexadecimal = hexadecimal(i)
        res_binary = binary(i)
        print(res_decimal,res_octal,res_binary)
'''        

def print_formatted(number):
    width = len("{0:b}".format(n))
    for i in xrange(1,n+1):
        print "{0:{width}d} {0:{width}o} {0:{width}X} {0:{width}b}".format(i, width=width)

if __name__ == '__main__':
    n = int(raw_input())
    print_formatted(n)