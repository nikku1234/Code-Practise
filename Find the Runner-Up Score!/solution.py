if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    
    arr_set = set(arr) # removing the duplicates
    arr_list = list(arr_set)
    arr_list.sort(reverse = True)
    print(arr_list[1])