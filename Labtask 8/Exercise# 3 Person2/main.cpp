#include <iostream>
#include "Person.h"
using namespace std;

int main() {
Person person;
    Person Jane = Person("Jane", 60.0f, 100);
    Person John = Person("John", 75.0f,230);

    float totalWeight = Jane + John;
    int johnAge = John;
    int janeAge = Jane;
    cout << "John's age: " << johnAge << endl;
    cout << "Jane's age: " << janeAge << endl;
    cout << "Total weight: " << totalWeight << endl;

    return 0;
}
