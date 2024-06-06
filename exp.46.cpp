#include <iostream>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input the number of rows and columns for the first matrix
    std::cout << "Enter the number of rows for the first matrix: ";
    std::cin >> rows1;
    std::cout << "Enter the number of columns for the first matrix: ";
    std::cin >> cols1;

    // Input the number of rows and columns for the second matrix
    std::cout << "Enter the number of rows for the second matrix: ";
    std::cin >> rows2;
    std::cout << "Enter the number of columns for the second matrix: ";
    std::cin >> cols2;

    // Check if the matrices can be multiplied
    if (cols1 != rows2) {
        std::cout << "Matrices cannot be multiplied. Number of columns in the first matrix must be equal to number of rows in the second matrix." << std::endl;
        return 1;
    }

    // Input elements for the first matrix
    int matrix1[rows1][cols1];
    std::cout << "Enter elements for first matrix:" << std::endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            std::cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    int matrix2[rows2][cols2];
    std::cout << "Enter elements for second matrix:" << std::endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            std::cin >> matrix2[i][j];
        }
    }

    // Create a matrix to store the product of the two matrices
    int productMatrix[rows1][cols2];

    // Multiply the matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            productMatrix[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                productMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the product matrix
    std::cout << "Product of the matrices:" << std::endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            std::cout << productMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

