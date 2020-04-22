def average(array):
    # your code goes here
    set_values = set(array)
    sum = 0
    for i in set_values:
        sum+=i
    avg = sum/len(set_values)
    return avg


