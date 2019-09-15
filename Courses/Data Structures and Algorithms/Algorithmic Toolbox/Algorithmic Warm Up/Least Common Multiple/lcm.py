# python3


def lcm_naive(a, b):
    assert 1 <= a <= 2 * 10 ** 9 and 1 <= b <= 2 * 10 ** 9

    multiple = max(a, b)
    while multiple % a != 0 or multiple % b != 0:
        multiple += 1

    return multiple

def gcd_euclid(a, b):
    dividend = a if (a >= b) else b
    divisor = a if (a <= b) else b

    while divisor != 0:
        remainder = dividend % divisor
        dividend = divisor
        divisor = remainder

    return dividend

def lcm(a, b):
    assert 1 <= a <= 2 * 10 ** 9 and 1 <= b <= 2 * 10 ** 9

    return (a * b) // gcd_euclid(a, b)


if __name__ == '__main__':
    input_a, input_b = map(int, input().split())
    print(lcm(input_a, input_b))
