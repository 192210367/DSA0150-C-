#include <iostream>

int main() {
    int num1, num2;

    // Input the two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    int gcd;

    // Using a do-while loop to calculate the GCD
    do {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    } while (num1 != num2);

    gcd = num1;

    // Output the result
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << std::endl;

    return 0;
}

