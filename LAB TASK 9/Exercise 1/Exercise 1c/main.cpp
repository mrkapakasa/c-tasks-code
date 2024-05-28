#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;
int main(){
    Rectangle rect;
    Triangle trg1;
    Polygon Poly;
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trg1;
    Polygon* pPoly3 = &Poly;
    pPoly1 ->SetValues(4,5);
    pPoly2 ->SetValues(4,5);
    pPoly3 ->SetValues(4,5);
    cout << pPoly1->Area() << endl;
    cout << pPoly2->Area() << endl;
    cout << pPoly3->Area() << endl;
    
    return 0;

}

