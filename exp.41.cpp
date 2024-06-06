#include <iostream>

int main() {
    int size, value, count = 0;

    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    // Input elements into the array
    std::cout << "Enter " << size << " elements into the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Input the value to find its occurrences
    std::cout << "Enter the value to find its occurrences: ";
    std::cin >> value;

    // Count the number of occurrences of the value
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            count++;
        }
    }

    // Print the number of occurrences
    std::cout << "The number of occurrences of " << value << " in the array is: " << count << std::endl;

    return 0;
}

