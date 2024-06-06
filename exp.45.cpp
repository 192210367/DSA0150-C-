#include <iostream>

int main() {
    int rows, cols;

    // Input the number of rows and columns for the matrices
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Input elements for the first matrix
    int matrix1[rows][cols];
    std::cout << "Enter elements for first matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    int matrix2[rows][cols];
    std::cout << "Enter elements for second matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix2[i][j];
        }
    }

    // Create a matrix to store the sum of the two matrices
    int sumMatrix[rows][cols];

    // Add the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    std::cout << "Sum of the matrices:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << sumMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

