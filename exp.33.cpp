#include <iostream>

int main() {
    int rows;

    // Input the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Loop to iterate through each row
    for (int i = 0; i < rows; i++) {
        int number = 1;

        // Loop to print spaces in each row
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }

        // Loop to print numbers in each row
        for (int k = 0; k <= i; k++) {
            std::cout << number << " ";
            number = number * (i - k) / (k + 1);
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}

