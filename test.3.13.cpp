#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (str1 == str2) {
        cout << "Both strings are equal." << endl;
    } else {
        cout << "Both strings are not equal." << endl;
    }

    return 0;
}

