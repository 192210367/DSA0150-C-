#include <iostream>

using namespace std;

int main() {
    int number, originalNumber, reversedNumber = 0;
    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Reverse the number
    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (originalNumber == reversedNumber) {
        cout << "It is a Palindrome" << endl;
    } else {
        cout << "It is not a Palindrome" << endl;
    }

    return 0;
}

