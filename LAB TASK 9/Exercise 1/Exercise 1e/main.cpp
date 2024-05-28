#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;
int main(){
    Rectangle rect;
    Triangle trg1;
    Polygon* pPoly1 = &rect;
     Polygon* pPoly2 = &trg1;

    pPoly1->SetValues(4,5);
    pPoly2->SetValues(4,5);

    pPoly1->printArea();
    pPoly2->printArea();

    return 0;
}

