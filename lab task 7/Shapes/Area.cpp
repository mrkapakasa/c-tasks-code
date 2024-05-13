// Area.cpp
#include "Area.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include <cmath>

float shapes::Area::calculateSquareArea(const shapes::Square& square) {
    return square.getSide() * square.getSide();
}

double shapes::Area::calculateTriangleArea(const shapes::Triangle& triangle) {
    float a = triangle.getSideA();
    float b = triangle.getSideB();
    float c = triangle.getSideC();
    float s = (a + b + c) / 2; // Semi-perimeter
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

float shapes::Area::calculateCircleArea(const shapes::Circle& circle) {
    return 3.14 * circle.getRadius() * circle.getRadius(); // Alternatively, you can use M_PI if available
}
