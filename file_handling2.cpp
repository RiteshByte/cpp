#include <iostream>
#include <fstream>   // header for file handling
using namespace std;

int main() {
    ofstream outFile;          // step 1: create object
    outFile.open("example.txt");  // step 2: open file using .open()

    // Write data to file
    outFile << "Hello, this is a file handling example in C++ using open().\n";
    outFile << "File handling helps to store data permanently.";
    outFile.close();  // step 3: close the file

    cout << "Data written to file successfully!\n";

    ifstream inFile;            // step 1: create object
    inFile.open("example.txt"); // step 2: open file using .open()

    string line;
    cout << "\nReading data from file:\n";

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();  // step 3: close file
    return 0;
}
