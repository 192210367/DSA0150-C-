#include <iostream>

int main() {
    int num, sum = 0;

    // Input the number
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    // Using a while loop to calculate the sum of digits
    while (num != 0) {
        sum += num % 10;  // Add the last digit to sum
        num /= 10;        // Remove the last digit from num
    }

    // Output the result
    std::cout << "The sum of the digits is: " << sum << std::endl;

    return 0;
}

