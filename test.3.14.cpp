#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    float area;

    // Constructor for circle
    Shape(float radius) {
        area = 3.14159 * radius * radius;
    }

    // Constructor for rectangle
    Shape(float length, float width) {
        area = length * width;
    }

    // Constructor for triangle
    Shape(float base, float height, char) {
        area = 0.5 * base * height;
    }
};

int main() {
    float radius, length, width, base, height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Shape circle(radius);
    cout << "Area of the circle: " << circle.area << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    Shape rectangle(length, width);
    cout << "Area of the rectangle: " << rectangle.area << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    Shape triangle(base, height, 't');
    cout << "Area of the triangle: " << triangle.area << endl;

    return 0;
}

