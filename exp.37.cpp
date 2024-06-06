#include <iostream>

int main() {
    int size, pos;

    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    // Input elements into the array
    std::cout << "Enter " << size << " elements into the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Input the position of the element to delete
    std::cout << "Enter the position of the element to delete: ";
    std::cin >> pos;

    // Check if the position is valid
    if (pos < 0 || pos >= size) {
        std::cout << "Invalid position!" << std::endl;
        return 1;
    }

    // Shift elements to the left from position to end of array
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    // Print the array after deletion
    std::cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

