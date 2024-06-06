#include <iostream>

int main() {
    int size;
    int sum = 0;

    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    // Input elements into the array
    std::cout << "Enter " << size << " elements into the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Calculate the sum of all elements
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Print the sum
    std::cout << "Sum of all elements in the array: " << sum << std::endl;

    return 0;
}

