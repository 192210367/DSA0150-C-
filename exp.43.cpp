#include <iostream>

int main() {
    int size1, size2;

    // Input the size of the first array
    std::cout << "Enter the size of the first array: ";
    std::cin >> size1;

    int arr1[size1];

    // Input elements into the first array
    std::cout << "Enter " << size1 << " elements into the first array: ";
    for (int i = 0; i < size1; i++) {
        std::cin >> arr1[i];
    }

    // Input the size of the second array
    std::cout << "Enter the size of the second array: ";
    std::cin >> size2;

    int arr2[size2];

    // Input elements into the second array
    std::cout << "Enter " << size2 << " elements into the second array: ";
    for (int i = 0; i < size2; i++) {
        std::cin >> arr2[i];
    }

    // Calculate the size of the merged array
    int size3 = size1 + size2;
    int mergedArr[size3];

    // Merge the arrays
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }

    // Print the merged array
    std::cout << "Merged array: ";
    for (int i = 0; i < size3; i++) {
        std::cout << mergedArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

