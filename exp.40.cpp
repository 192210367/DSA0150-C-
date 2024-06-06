#include <iostream>
#include <climits>

int main() {
    int size;

    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    // Input elements into the array
    std::cout << "Enter " << size << " elements into the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find the largest and second largest elements
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        std::cout << "There is no second largest element in the array." << std::endl;
    } else {
        std::cout << "The second largest element in the array is: " << secondLargest << std::endl;
    }

    return 0;
}

