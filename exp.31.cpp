#include <iostream>

int main() {
    int rows;

    // Input the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Loop to print the pattern
    for (int i = 1; i <= rows; ++i) {
        // Print the numbers in each row
        for (int j = 1; j <= i; ++j) {
            std::cout << i;
        }
        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}

