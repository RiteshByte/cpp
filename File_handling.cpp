#include <iostream>
#include <fstream>   // header for file handling
using namespace std;

int main() {
    // Create an object of ofstream (to write)
    ofstream outFile("example.txt");

    // Write data to file
    outFile << "Hello, this is a file handling example in C++.\n";
    outFile << "File handling helps to store data permanently.";
    outFile.close();  // close the file after writing

    cout << "Data written to file successfully!\n";

    // Create an object of ifstream (to read)
    ifstream inFile("example.txt");
    string line;

    cout << "\nReading data from file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();  // close the file after reading
    return 0;
}
