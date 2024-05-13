#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // For std::transform
#include <sstream>

using namespace std;
string reverseString(const std::string& str) {
    std::stringstream ss(str);
    string text, result;
        while (ss>> text) {
            result = text + " " + result;
        }
    return result.substr(0, result.length() - 1);
}
string capitalizeSecondLetters(const string& str) {
    stringstream ss(str);
    string text, result;

    while(ss >> text) {
            if (text.length() > 1) {
                text[1] = toupper(text[1]);
            }
            result += text + " ";
            }
        return result.substr(0, result.length() - 1);
        }
            int countVowels(const string& str) {
    int numVowels = 0;
    for (char c : str){

     if (isalpha(c) && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            numVowels++;
        }
    }
    return numVowels;
}
int countWords(const string& str) {
    int numWords = count_if(str.begin(), str.end(), [](char c) { return isspace(c); }) + 1;
    return numWords;
}

int main() {
    ifstream inFile("text.txt"); 
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string fileData;
    string line;
    while (getline(inFile, line)) {
        fileData += line + "\n"; 
    }
    int numVowels = countVowels(fileData);
    int numWords = countWords(fileData);
    string reversedStatement = reverseString(fileData);
    string capitalizedStatement = capitalizeSecondLetters(fileData);
    cout << "Number of vowels: " << numVowels << endl;
    cout << "Number of words: " << numWords << endl;
    cout << "Reversed statement:\n" << reversedStatement << endl;
    cout << "Capitalized second letters:\n" << capitalizedStatement << endl;

    return 0;
}