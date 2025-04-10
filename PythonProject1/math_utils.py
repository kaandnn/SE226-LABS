def add(x,y) :
    return x+y
def sub(x,y) :
    return x-y
def mul(x,y) :
    return x*y
def div(x,y) :
    try :
        return x/y
    except ZeroDivisionError :
        return "Cannot divide by zero"
def pow(x,y) :
    return x**y

def mod(x,y) :
    try :
        return x % y
    except ZeroDivisionError :
        return "Cannot divide by zero"


if __name__ == "__main__":
    print(add(1,2))
    print(sub(2,1))
    print(mul(2,1))
    print(div(2,1))
    print(pow(2,1))
    print(mod(2,1))

