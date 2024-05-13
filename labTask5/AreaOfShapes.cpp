#include <iostream>
#include <cmath> 
using namespace std;

double computeAreaOfSquare(double edge) {
    return edge * edge;
}

double computeAreaOfRectangle(double length, double width) {
    return length * width;
}

double computeAreaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    char option;
    bool quit = false;
            
    while (!quit) {
        cout << "select shape to compute area:\n";
        cout << "1. Rectangle\n";
        cout << "2. Square\n";
        cout << "3. Triangle\n";
        cout << "Enter your option (1-3): ";
        cin >> option;
        
        switch (option) {
                
            case '1': 
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of Rectangle: " << computeAreaOfRectangle(length, width) << endl;
                break;
                    
            case '2': 
                double edge;
                cout << "Enter the edge square length: ";
                cin >> edge;
                cout << "Area of Square: " << computeAreaOfSquare(edge) << endl;
                break;

                    
            case '3': 
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of Triangle: " << computeAreaOfTriangle(base, height) <<endl;
                break;

            default:
                cout << "Invalid option. Please enter a valid option from (1-3)." << endl;
                break;
        }

        
        char continueOption;
        cout << "Do you want to compute another shape? (y/n): ";
        cin >> continueOption;
        if (continueOption != 'y' && continueOption != 'Y') {
            quit = true;
        }
    }

    cout << "Thank you for using the area calculator program!" << endl;
    return 0;
}