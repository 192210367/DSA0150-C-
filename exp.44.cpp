#include <iostream>

int main() {
    int rows, cols;

    // Input the number of rows and columns
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Dynamically allocate memory for the 2D array
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Input elements into the 2D array
    std::cout << "Enter " << rows * cols << " elements into the array:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> arr[i][j];
        }
    }

    // Display the values in the 2D array
    std::cout << "Values in the array:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

