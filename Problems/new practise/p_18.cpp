//run time polymorphism
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Shape* s;         // Base class pointer

    Circle c;
    Rectangle r;

    s = &c;
    s->draw();        // Calls Circle::draw() at runtime

    s = &r;
    s->draw();        // Calls Rectangle::draw() at runtime

    return 0;
}