# Single-line comment for testing

"""
Multi-line comment for theme testing
"""

import math

MAX_VALUE = 100

class Example:
    def __init__(self, id, name):
        self.id = id
        self.name = name

    def display(self):
        print(f"ID: {self.id}, Name: {self.name}")

    @staticmethod
    def demonstrate_syntax():
        numbers = [5, 3, 8, 1]
        numbers.sort()  # Testing list methods
        for num in numbers:
            print(f"Number: {num}")

def square(value):
    return value ** 2  # Testing arithmetic and functions

if __name__ == "__main__":
    print("Testing VSCode Theme for Python")

    example = Example(1, "VSCode Theme")
    example.display()

    Example.demonstrate_syntax()

    value = 7
    print(f"Square of {value} is {square(value)}")

    if value > 5:
        print("Value is greater than 5")
    else:
        print("Value is less than or equal to 5")
