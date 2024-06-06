#include <iostream>
#include <cmath>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Input the number
    std::cout << "Enter an integer: ";
    std::cin >> num;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if ((int)result == num) {
        std::cout << num << " is an Armstrong number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }

    return 0;
}

