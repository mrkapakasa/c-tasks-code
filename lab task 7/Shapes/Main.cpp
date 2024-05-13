#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;
int main() {
    char choice;
    do {
        cout << "Options:" <<endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" <<endl;
        cout << "3. Calculate the area of a circle" <<endl;
        cout << "4. Quit" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                float side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                shapes::Square square(side);
                cout << "Area of the square: " << shapes::Area::calculateSquareArea(square) <<endl;
                break;
            }
            case '2': {
                float sideA, sideB, sideC;
                cout << "Enter the lengths of the three sides of the triangle: ";
                cin >> sideA >> sideB >> sideC;
                shapes::Triangle triangle(sideA, sideB, sideC);
                cout << "Area of the triangle: " << shapes::Area::calculateTriangleArea(triangle) <<endl;
                break;
            }
            case '3': {
                float radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                shapes::Circle circle(radius);
                cout << "Area of the circle: " << shapes::Area::calculateCircleArea(circle) <<endl;
                break;
            }
            case '4':
                cout << "Exiting program. Goodbye!" <<endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
