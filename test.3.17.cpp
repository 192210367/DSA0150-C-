#include <iostream>
using namespace std;

void reverseString(const char* str) {
    const char* end = str;
    while (*end) {
        ++end;
    }
    --end;
    while (end >= str) {
        cout << *end;
        --end;
    }
    cout << endl;
}

int main() {
    const char* str = "Hello";
    reverseString(str);
    return 0;
}
