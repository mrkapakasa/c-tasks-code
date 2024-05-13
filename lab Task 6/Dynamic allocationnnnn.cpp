#include <iostream>
#include <string>
int main(){
    int* pPointerInt = new int;
    std::string* pPointerString = new std::string;
    std::cout <<"Enter an integer:";
    std::cin >> *pPointerInt;
    std::cout >> "Enter a String:";
    std::cin.ignore();
    std::getline(std::cin, *pPointerString);

    std::cout << "The dynamically allocated integer: "<<*pPointerInt<<std::endl;
    std::cout << "The dynamiclly allocated string: "<<*pPointerString<<std::endl;

    delete  pPointerInt ;
    delete pPointerString;
    return 0;
}