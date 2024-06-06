#include <iostream>

bool isBuzz(int num) {
    return num % 7 == 0 || num % 10 == 7;
}

int main() {
    int num;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is a Buzz number
    if (isBuzz(num)) {
        std::cout << num << " is a Buzz number." << std::endl;
    } else {
        std::cout << num << " is not a Buzz number." << std::endl;
    }

    return 0;
}

