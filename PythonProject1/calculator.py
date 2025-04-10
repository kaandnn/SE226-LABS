import math_utils

def main():
    print("Welcome to Calculator")
    try:
        x = int(input("Enter a number: "))
        y = int(input("Enter another number: "))
        op = input("Enter an operation (+, -, *, /, ^, %): ")

        operations = {
            "+": math_utils.add,
            "-": math_utils.sub,
            "*": math_utils.mul,
            "/": math_utils.div,
            "^": math_utils.pow,
            "%": math_utils.mod,
        }

        if op in operations:
            result = operations[op](x, y)
            print("Result:", result)
        else:
            print("Invalid operator!")

    except ValueError:
        print("Invalid input! Please enter numbers.")

if __name__ == "__main__":
    main()