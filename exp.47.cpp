#include <iostream>

int main() {
    int rows, cols;

    // Input the number of rows and columns for the matrix
    std::cout << "Enter the number of rows and columns for the matrix: ";
    std::cin >> rows >> cols;

    // Check if the matrix is square
    if (rows != cols) {
        std::cout << "Matrix must be square to find the sum of diagonals." << std::endl;
        return 1;
    }

    // Input elements for the matrix
    int matrix[rows][cols];
    std::cout << "Enter elements for the matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Calculate the sum of the main diagonal
    int sumMainDiagonal = 0;
    for (int i = 0; i < rows; i++) {
        sumMainDiagonal += matrix[i][i];
    }

    // Calculate the sum of the secondary diagonal
    int sumSecondaryDiagonal = 0;
    for (int i = 0; i < rows; i++) {
        sumSecondaryDiagonal += matrix[i][cols - i - 1];
    }

    // Display the sum of diagonals
    std::cout << "Sum of the main diagonal: " << sumMainDiagonal << std::endl;
    std::cout << "Sum of the secondary diagonal: " << sumSecondaryDiagonal << std::endl;

    return 0;
}

