#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

bool isStrong(int n) {
    int sum = 0;
    int originalNum = n;
    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    return sum == originalNum;
}

int main() {
    int num;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is a strong number
    if (isStrong(num)) {
        std::cout << num << " is a strong number." << std::endl;
    } else {
        std::cout << num << " is not a strong number." << std::endl;
    }

    return 0;
}

