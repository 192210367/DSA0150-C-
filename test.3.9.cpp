#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string paragraph;

    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    stringstream ss(paragraph);
    int wordCount = 0;
    string word;

    // Count words using stringstream
    while (ss >> word) {
        wordCount++;
    }

    cout << "Number of words: " << wordCount << endl;

    return 0;
}
