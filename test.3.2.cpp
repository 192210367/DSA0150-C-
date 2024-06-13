#include <iostream>
using namespace std;

// Function to find the sum of diagonal elements
int sumDiagonal(int arr[][2]) {
    return arr[0][0] + arr[1][1]; // Sum of diagonal elements
}

int main() {
    int arr[2][2];

    cout << "Enter elements of the 2x2 array:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    // Call function to find sum of diagonal elements
    int result = sumDiagonal(arr);

    cout << "Sum of diagonal elements: " << result << endl;

    return 0;
}

