# python3


def last_digit_of_fibonacci_number_naive(n):
    assert 0 <= n <= 10 ** 6

    if n <= 1:
        return n

    return (last_digit_of_fibonacci_number_naive(n - 1) + last_digit_of_fibonacci_number_naive(n - 2)) % 10


def last_digit_of_fibonacci_number(n):
    assert 0 <= n <= 10 ** 6
    if n<=1:
        return n
    a,b = 0,1
    for _ in range(n-1):
        c = a + b
        b,a = c,b
    return c % 10

if __name__ == '__main__':
    input_n = int(input())
    print(last_digit_of_fibonacci_number(input_n))
