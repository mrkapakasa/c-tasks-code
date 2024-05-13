#include <iostream>
#include <string>
using namespace std;
int main() {
    string texts[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    for (const string& text : texts) {
        // Check if the element starts with the letter "B"
        if (text.front() == 'B') {
            cout << "Element starting with 'B': " << text <<endl;
        }
    }

    return 0;
}