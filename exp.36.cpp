#include <iostream>

int main() {
    int size, pos, newValue;

    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    // Input elements into the array
    std::cout << "Enter " << size << " elements into the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Input the position and value to be inserted
    std::cout << "Enter the position to insert the value: ";
    std::cin >> pos;
    std::cout << "Enter the value to insert: ";
    std::cin >> newValue;

    // Check if the position is valid
    if (pos < 0 || pos > size) {
        std::cout << "Invalid position!" << std::endl;
        return 1;
    }

    // Shift elements to the right from position to end of array
    for (int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new value at the specified position
    arr[pos] = newValue;
    size++;

    // Print the array after insertion
    std::cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

