#include <iostream>

int main() {
    int size;
    double sum = 0;
    double average;

    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    // Input elements into the array
    std::cout << "Enter " << size << " elements into the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    // Calculate the average of all elements
    average = sum / size;

    // Print the average
    std::cout << "Average of all elements in the array: " << average << std::endl;

    return 0;
}

