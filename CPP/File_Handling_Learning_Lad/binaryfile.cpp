#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

int main() {
    // Variable declaration and initialization
    char input[100];
    strcpy(input, "The Learing Lad!\nThe Learning Lad!");

    // Opening the binary file
    fstream file;
    file.open("myfile.bin", ios::binary | ios::in | ios::out | ios::trunc);

    // check if the binary file is opened successfully or not!
    if(!file.is_open()) {
        cout << "Error while opening the file!" << endl;
    } else {
        // Writing into the file
        int length = strlen(input);
        for(int counter = 0; counter <= length; counter++) {
            file.put(input[counter]);
        }

        // Reading the file
        file.seekg(0);
        char ch;
        while(file.good()) {
            file.get(ch);
            cout << ch;
        }
    }
    return 0;
}