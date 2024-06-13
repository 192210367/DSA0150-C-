#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int rows;
    cout << "Number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << pow(2, i) << " ";
        }
        cout << endl;
    }

    return 0;
}

