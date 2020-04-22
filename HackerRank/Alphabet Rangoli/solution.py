import string
def print_rangoli(size):
    # your code goes here
    '''
    alphabets = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
    symbol = '-'
    array_size = size + 3*(size-1)
    print(array_size)
    for i in range(0,array_size):
        for left_side in range(0,int(array_size-i)/2):
            print(symbol),

        for i in range(i+1):
            print(alphabets[size-1])

        for right_side in range(0,int(array_size-i)/2):
            print(symbol),
        print("\n")
'''
    alphabets = string.ascii_lowercase
    L = []
    for i in range(size):
        s = "-".join(alphabets[i:size])
        #print(s)
        L.append((s[::-1]+s[1:]).center(4*size-3, "-"))
        #print(L)
    print('\n'.join(L[:0:-1]+L))

    


