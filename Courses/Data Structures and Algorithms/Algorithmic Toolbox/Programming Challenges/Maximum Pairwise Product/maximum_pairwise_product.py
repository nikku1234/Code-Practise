# python3


def max_pairwise_product(numbers):
    n = len(numbers)
    max_product = 0
    for first in range(n):
        for second in range(first + 1, n):
            max_product = max(max_product,
                numbers[first] * numbers[second])

    return max_product

def max_pairwise_product_fast(numbers):
    n = len(numbers)
    max_index1 = -1

    for i in range(n):
        if max_index1 == -1 or numbers[i]>numbers[max_index1] :
            max_index1 = i

    max_index2 = -1

    for i in range(n):

        if i != max_index1 and (max_index2 == -1 or numbers[i]>numbers[max_index2]):
            max_index2 = i

    return numbers[max_index1]*numbers[max_index2]




if __name__ == '__main__':
    input_n = int(input())
    input_numbers = [int(x) for x in input().split()]
    print(max_pairwise_product_fast(input_numbers))
