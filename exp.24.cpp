#include <iostream>

int main() {
    int num, sum = 0, originalNum, digit;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> num;

    originalNum = num;

    // Calculate the sum of digits
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    // Check if the number is divisible by the sum of its digits
    if (originalNum % sum == 0) {
        std::cout << originalNum << " is a Harshad number." << std::endl;
    } else {
        std::cout << originalNum << " is not a Harshad number." << std::endl;
    }

    return 0;
}

