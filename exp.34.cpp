#include <iostream>

int main() {
    int n, c, k, space = 1;

    // Input the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    space = n - 1;

    // Loop to print upper part of the diamond
    for (k = 1; k <= n; k++) {
        for (c = 1; c <= space; c++)
            std::cout << " ";
        space--;
        for (c = 1; c <= 2 * k - 1; c++)
            std::cout << "*";
        std::cout << "\n";
    }

    space = 1;

    // Loop to print lower part of the diamond
    for (k = 1; k <= n - 1; k++) {
        for (c = 1; c <= space; c++)
            std::cout << " ";
        space++;
        for (c = 1; c <= 2 * (n - k) - 1; c++)
            std::cout << "*";
        std::cout << "\n";
    }

    return 0;
}

