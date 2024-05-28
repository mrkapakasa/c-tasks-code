// Write on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main (){

    ofstream myfile ("example.txt");

    if (myfile. is_open()){
        myfile << "hello file.! " << endl;
        myfile << "This is another line.\n";
        myfile.close();
         }    else
             {
        cout << "unable to open a file";

             }

    return 0;
}