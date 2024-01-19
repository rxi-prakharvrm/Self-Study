#include <iostream>
#include <string>
#include <fstream>

/*
header file for 

fstream = used for both reading and writing the file
ifstream = used only for reading
ofstream  = used only for writing

classes
*/

#include <fstream> 
using namespace std;

int main() {
    /*

    different file opening modes
    ios::in = for opening the file into read mode
    ios::out = for opening the file into write mode
    ios::trunc = for creating an empty file if not exist at the provided path or it will override the existing class with an empty file of same name
    ios::app = for creating file if not exist otherwise copy the content of existed file in the new file

    */

    fstream file("myfile.txt", ios::in | ios::out | ios::app);
    if(!file.is_open()) {
        cout << "Error while opening the file!" << endl;
    } else {
        cout << "File opened successfully!" << endl;

        cout << "Writing to the file..." << endl;
        file << "Prakhar" << endl;

        cout << endl;

        cout << "Reading the file..." << endl;
        file.seekg(0);
        string line, text = "";
        // file.eof() will also work same 
        while(file.good()) {
            getline(file, line);
            cout << line << endl;
            text = text + line;
        }

        cout << endl << "Counting the number of characters in the file: " << text.size() << endl;

        file.close();
    }














    // file.open("myfile.txt", ios::in | ios::out | ios::app);
    // if(!file.is_open()) {
    //     cout << "Error while opening the file!";
    // } else {
    //     // read and write
    //     cout << "File opened successfully!" << endl;
    //     file << "This is the new text that should be appended in the myfile.txt";
    //     file.close();
    //     cout << "File written & closed successfully!" << endl;
    // }
    return 0;
}