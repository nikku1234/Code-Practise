#Bit Manipulation method
#https://stackoverflow.com/questions/25847191/new-to-java-trying-to-understand-checker-1-val
def bit_checker(name):
    checker = 0
    for i in name:
        a = ord(i) - 97
        if ((checker & (1 << a)) > 0): #AND condition
            return False
        else:
            checker |= (1 <<val)
    return True

#HashTable Method
def hashtable_method(name):
    unique = {}
    for i in name:
        if i not in unique.keys():
            unique[i] = 1
        else:
            return False
    return True


#Using ASCII method
def is_unique(name):
    if(len(name)>128):
        return False
    else:
        char_set = list(bytearray(128))
        # print(char_set)
        for i in name:
            a = ord(i)
            if char_set[a]:
                return False
            else:
                char_set[a] = True
    
    return True


if __name__ == '__main__':
    name ="aabcde"
    # res = is_unique(name)
    # print(res)
    # name1 = "abcde"
    # res = is_unique(name1)
    # print(res)
    # print(hashtable_method(name))
    # print(hashtable_method(name1))
    val = 2
    print(1<<val)
    print(bit_checker(name))
