# python3


def fibonacci_number_naive(n):
    assert 0 <= n <= 40

    if n <= 1:
        return n

    return fibonacci_number_naive(n - 1) + fibonacci_number_naive(n - 2)


def fibonacci_number(n):
    assert 0 <= n <= 40
    a,b = 0,1
    if n<=1:
        return n
    for _ in range (n-1):
        c = a+b
        b,a =c,b
    return c


if __name__ == '__main__':
    input_n = int(input())
    print(fibonacci_number(input_n))

