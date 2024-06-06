#include <iostream>
#include <cmath>

bool isNarcissistic(int num) {
    int numDigits = 0;
    int originalNum = num;
    int sum = 0;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        numDigits++;
    }

    // Calculate the sum of digits raised to the power of the number of digits
    originalNum = num;
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, numDigits);
        originalNum /= 10;
    }

    // Check if the number is a narcissistic number
    return sum == num;
}

int main() {
    int num;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is a Narcissistic number
    if (isNarcissistic(num)) {
        std::cout << num << " is a Narcissistic number." << std::endl;
    } else {
        std::cout << num << " is not a Narcissistic number." << std::endl;
    }

    return 0;
}

