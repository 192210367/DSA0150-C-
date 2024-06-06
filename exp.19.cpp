#include <iostream>
#include <string>

int main() {
    std::string str;
    bool isPalindrome = true;

    // Input the string
    std::cout << "Enter a string: ";
    std::cin >> str;

    // Initialize pointers for the start and end of the string
    int left = 0;
    int right = str.length() - 1;

    // Using a while loop to check if the string is a palindrome
    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    // Output the result
    if (isPalindrome) {
        std::cout << str << " is a palindrome." << std::endl;
    } else {
        std::cout << str << " is not a palindrome." << std::endl;
    }

    return 0;
}

