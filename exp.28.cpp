#include <iostream>

bool isNeon(int num) {
    int square = num * num;
    int sum = 0;
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }
    return sum == num;
}

int main() {
    int num;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is a Neon number
    if (isNeon(num)) {
        std::cout << num << " is a Neon number." << std::endl;
    } else {
        std::cout << num << " is not a Neon number." << std::endl;
    }

    return 0;
}

