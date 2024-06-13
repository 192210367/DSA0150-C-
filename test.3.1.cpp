#include <iostream>
#include <cmath>

using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual function to calculate area
    virtual float area() = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    // Constructor to initialize radius
    Circle(float r) {
        radius = r;
    }

    // Function to calculate area of a circle
    float area() override {
        return 3.14 * radius * radius;
    }
};

// Derived class Square
class Square : public Shape {
private:
    float side;

public:
    // Constructor to initialize side length
    Square(float s) {
        side = s;
    }

    // Function to calculate area of a square
    float area() override {
        return side * side;
    }
};

int main() {
    float radius, side;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    cout << "Enter the length of the square: ";
    cin >> side;

    // Create objects of Circle and Square classes
    Circle circle(radius);
    Square square(side);

    // Calculate and display area of circle
    cout << "Area of circle: " << circle.area() << endl;

    // Calculate and display area of square
    cout << "Area of square: " << square.area() << endl;

    return 0;
}

