#ifndef Square_h
#define Square_h

namespace shapes {
class Square {
private:
    float sideLength;

public:
    // Default constructor
    Square();

    // Overloaded constructor
    Square(float);

    // Accessor methods
    void setSideLength(float);
    float getSideLength();

    // Destructor
    ~Square();
};
}

#endif

#include "Square.h"

namespace shapes {
// Default constructor
Square::Square() {
    sideLength = 0.0;
}

// Overloaded constructor
Square::Square(float side) {
    sideLength = side;
}

// Accessor methods
void Square::setSideLength(float side) {
    sideLength = side;
}

float Square::getSideLength() {
    return sideLength;
}

// Destructor
Square::~Square() {}
}
#ifndef Triangle_h
#define Triangle_h

namespace shapes {
class Triangle {
private:
    float base;
    float height;

public:
    // Default constructor
    Triangle();

    // Overloaded constructor
    Triangle(float, float);

    // Accessor methods
    void setBase(float);
    void setHeight(float);
    float getBase();
    float getHeight();

    // Destructor
    ~Triangle();
};
}

#endif 
#include "Triangle.h"

namespace shapes {
// Default constructor
Triangle::Triangle() {
    base = 0.0;
    height = 0.0;
}

// Overloaded constructor
Triangle::Triangle(float b, float h) {
    base = b;
    height = h;
}

// Accessor methods
void Triangle::setBase(float b) {
    base = b;
}

void Triangle::setHeight(float h) {
    height = h;
}

float Triangle::getBase() {
    return base;
}

float Triangle::getHeight() {
    return height;
}

// Destructor
Triangle::~Triangle() {}
}

#ifndef Circle_h
#define Circle_h

namespace shapes {
class Circle {
private:
    float radius;

public:
    // Default constructor
    Circle();

    // Overloaded constructor
    Circle(float);

    // Accessor methods
    void setRadius(float);
    float getRadius();

    // Destructor
    ~Circle();
};
}

#endif
#include "Circle.h"

namespace shapes {
// Default constructor
Circle::Circle() {
    radius = 0.0;
}

// Overloaded constructor
Circle::Circle(float r) {
    radius = r;
}

// Accessor methods
void Circle::setRadius(float r) {
    radius = r;
}

float Circle::getRadius() {
    return radius;
}

// Destructor
Circle::~Circle() {}
}
#ifndef Area_h
#define Area_h

class Area {
public:
    // Calculate area of square
    static float calculateSquareArea(shapes::Square);

    // Calculate area of triangle
    static float calculateTriangleArea(shapes::Triangle);

    // Calculate area of circle
    static float calculateCircleArea(shapes::Circle);
};

#endif 
#include "Area.h"
#include "shapes/Square.h"
#include "shapes/Triangle.h"
#include "shapes/Circle.h"

// Calculate area of square
float Area::calculateSquareArea(shapes::Square square) {
    return square.getSideLength() * square.getSideLength();
}

// Calculate area of triangle
float Area::calculateTriangleArea(shapes::Triangle triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

// Calculate area of circle
float Area::calculateCircleArea(shapes::Circle circle) {
    return 3.14159 * circle.getRadius() * circle.getRadius();
}
#include <iostream>
#include "shapes/Square.h"
#include "shapes/Triangle.h"
#include "shapes/Circle.h"
#include "Area.h"

int main() {
    int choice;
    while (true) {
        std::cout << "1. Calculate area of square" << std::endl;
        std::cout << "2. Calculate area of triangle" << std::endl;
        std::cout << "3. Calculate area of circle" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                shapes::Square square;
                float side;
                std::cout << "Enter side length: ";
                std::cin >> side;
                square.setSideLength(side);
                float area = Area::calculateSquareArea(square);
                std::cout << "Area of square: " << area << std::endl;
                break;
            }
            case 2: {
                shapes::Triangle triangle;
                float base, height;
                std::cout << "Enter base: ";
                std::cin >> base;
                std::cout << "Enter height: ";
                std::cin >> height;
                triangle.setBase(base);
                triangle.setHeight(height);
                float area = Area::calculateTriangleArea(triangle);
                std::cout << "Area of triangle: " << area << std::endl;
                break;
            }
            case 3: {
                shapes::Circle circle;
                float radius;
                std::cout << "Enter radius: ";
                std::cin >> radius;
                circle.setRadius(radius);
                float area = Area::calculateCircleArea(circle);
                std::cout << "Area of circle: " << area << std::endl;
                break;
            }
            case 4:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
    return 0;
}