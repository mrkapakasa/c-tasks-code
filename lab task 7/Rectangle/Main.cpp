#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    
    Rectangle rectangle;     // Create an instance of Rectangle
    
   float length, width;    //declaring variable of sides of lectangle

    // prompt the user
    cout << "Enter length value of lectangle: ";
    cin >> length;
    cout << "Enter width value of lectangle: ";
    cin >> width;

    // Set length and width using accessor methods
    rectangle.setLength(length);
    rectangle.setWidth(width);


    float area = rectangle.calculateArea();  // Calculate and output area
    cout << "Area of rectangle: " << area <<endl;

    return 0;
}

