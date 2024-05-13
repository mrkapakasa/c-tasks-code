#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float length1, width1, length2, width2;

    // Create an instance of Rectangle using default constructor
    Rectangle rectangle1;

    // Input length and width from user for rectangle1
    cout << "Enter length of the first rectangle: ";
    cin >> length1;
    cout << "Enter width of the first rectangle: ";
    cin >> width1;

    // Set the length and width of the first rectangle
    rectangle1.setLength(length1);
    rectangle1.setWidth(width1);

    // Calculate and output the area of rectangle1
    cout << "Area of the first rectangle: " << rectangle1.calculateArea() <<endl;

    // Create another instance of Rectangle using overloaded constructor
    cout << "\nEnter length of the second rectangle: ";
    cin >> length2;
    cout << "Enter width of the second rectangle: ";
    cin >> width2;

    Rectangle rectangle2(length2, width2);

    // Calculate and output the area of rectangle2
    cout << "Area of the second rectangle: " << rectangle2.calculateArea() <<endl;

    return 0;
}