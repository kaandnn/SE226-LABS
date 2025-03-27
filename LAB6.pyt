#1
def factorial(x) :
    if x == 0  or x == 1:
        return 1
    else :
        return x * factorial(x-1)
print( factorial(5) )

#2
import math


def factorial(x):
    """Recursively calculates factorial of x."""
    if x == 0 or x == 1:
        return 1
    else:
        return x * factorial(x - 1)


sine_term = lambda x, n: ((-1)**n * x**(2*n + 1)) / factorial(2*n + 1)


def sine_x(x, n):
    """Calculates sine(x) in degrees using n terms of Taylor series."""
    x = x * math.pi / 180
    result = 0
    for i in range(n):
        result += sine_term(x, i)
    return result_lambda


x_input = float(input("Enter angle in degrees (x): "))
n_input = int(input("Enter number of terms (n): "))

approximation = sine_x(x_input, n_input)
print(f"Approximate sine({x_input}) with {n_input} terms: {approximation}")

#q3
total = 0

def recursive_sum(n):
    """
    Recursively calculates sum from 1 to n using a global variable.
    Does not return anything.
    """
    global total
    if n == 0:
        return
    total += n
    recursive_sum(n - 1)












