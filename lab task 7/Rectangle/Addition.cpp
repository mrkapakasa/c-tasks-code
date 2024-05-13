#pragma once

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();

    // Overloaded constructor
    Rectangle(float, float);

    // Accessor methods
    void setLength(float);
    void setWidth(float);
    float getLength();
    float getWidth();

    // Member function to calculate area
    float calculateArea();
};
#endif
#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

// Overloaded constructor
Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

// Accessor methods
void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() {
    return length;
}

float Rectangle::getWidth() {
    return width;
}

// Member function to calculate area
float Rectangle::calculateArea() {
    return length * width;
}
#include <iostream>
#include "Rectangle.h"

int main() {
    // Create an instance of Rectangle
    Rectangle rectangle1;

    // Get length and width from user input
    float length, width;
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;

    // Set length and width using accessor methods
    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    // Calculate and output area
    float area = rectangle1.calculateArea();
    std::cout << "Area of rectangle 1: " << area << std::endl;

    // Create another instance of Rectangle using overloaded constructor
    Rectangle rectangle2;

    // Get length and width from user input
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;

    // Create rectangle2 using overloaded constructor
    Rectangle rectangle2(length, width);

    // Calculate and output area
    area = rectangle2.calculateArea();
    std::cout << "Area of rectangle 2: " << area << std::endl;

    return 0;
}