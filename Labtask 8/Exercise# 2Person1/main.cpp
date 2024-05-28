#include <iostream>
#include "Person.h"
using namespace std;

int main() {
Person person;
    Person Jane = Person("Jane", 60.0f,23);
    Person John = Person("John", 75.0f, 32);

    float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << endl;

    return 0;
}
