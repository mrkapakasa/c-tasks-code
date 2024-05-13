#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number = 0;

    while (!(number) || number < 5 || number > 10) {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> number;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n'); 
            cout << "Invalid input. Please enter a valid integer." << endl;
            continue;
        }
    }

    cout << "number value accpted:" << number << endl;


    return 0;
}
