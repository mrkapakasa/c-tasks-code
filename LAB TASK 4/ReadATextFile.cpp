// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    string line;

    ofstream myfile("example.txt");

    if (myfile.is_open()){

        while(getline(myfile,line))
        {
            cout << line << '\n';

        }
        myfile.close();

    }
    else
    {
        cout << "unable to open file";
        
    }
       return 0;
}