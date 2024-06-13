#include <iostream>

using namespace std;

// Rectangle class
class Rectangle {
protected:
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}

    void display() {
        cout << width << " " << height << endl;
    }
};

// RectangleArea class derived from Rectangle
class RectangleArea : public Rectangle {
public:
    RectangleArea(int w, int h) : Rectangle(w, h) {}

    void display() {
        cout << width * height << endl;
    }
};

int main() {
    int width, height;
    cin >> width >> height;

    RectangleArea rectArea(width, height);
    rectArea.display();

    return 0;
}

