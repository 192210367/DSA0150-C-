#include <iostream>

int main() {
    int num, sum = 0;

    // Input the number
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    // Check if the number is less than or equal to 0
    if (num <= 0) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1;
    }

    // Calculate the sum of divisors
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the number
    if (sum == num) {
        std::cout << num << " is a perfect number." << std::endl;
    } else {
        std::cout << num << " is not a perfect number." << std::endl;
    }

    return 0;
}

