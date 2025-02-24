#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// This is a single-line comment

/*
 * Multi-line comment to test comment styling in the theme
 */


constexpr int MAX_VALUE = 100;

class Example {
private:
    int id;
    std::string name;

public:
    Example(int id, const std::string &name) : id(id), name(name) {}

    void display() const {
        std::cout << "ID: " << id << ", Name: " << name << std::endl;
    }

    static void demonstrateSyntax() {
        std::vector<int> numbers{ 5, 3, 8, 1 };
        std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
            return a < b; // Lambda function to test theme highlighting
        });

        for (const auto &num : numbers) {
            std::cout << "Number: " << num << std::endl;
        }
    }
};

template <typename T>
T square(const T &value) {
    return value * value; // Testing template and arithmetic operations
}

int main() {
    std::cout << "Testing VSCode Theme for C++" << std::endl;

    Example example(1, "VSCode Theme");
    example.display();

    Example::demonstrateSyntax();

    int value{ 7 };
    std::cout << "Square of " << value << " is " << square(value) << std::endl;

    if (value > 5) {
        std::cout << "Value is greater than 5" << std::endl;
    } else {
        std::cout << "Value is less than or equal to 5" << std::endl;
    }

    return 0;
}
