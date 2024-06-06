#include <iostream>

int main() {
    int num;
    bool isPrime = true;

    // Input the number to check
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    // Check if the number is less than or equal to 1
    if (num <= 1) {
        isPrime = false;
    } else {
        // Using a for loop to check for factors
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}

