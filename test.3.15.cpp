#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    // Default constructor
    Point(int xVal = 0, int yVal = 0) : x(xVal), y(yVal) {}

    // Copy constructor
    Point(const Point& p) : x(p.x), y(p.y) {
        cout << "Copy constructor called" << endl;
    }

    // Function to display the point coordinates
    void display() const {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Point P1(10, 15);  // Parameterized constructor
    cout << "P1: ";
    P1.display();

    Point P2 = P1;    // Copy constructor
    cout << "P2: ";
    P2.display();

    return 0;
}
