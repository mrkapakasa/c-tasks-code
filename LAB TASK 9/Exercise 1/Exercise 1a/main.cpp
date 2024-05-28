#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;
int main(){
    Rectangle rect;
    Triangle trgl;
    rect.SetValues(4,5);
    trgl.SetValues(4,5);
    cout << trgl.Area() << endl;
    cout << rect.Area() << endl;

}

