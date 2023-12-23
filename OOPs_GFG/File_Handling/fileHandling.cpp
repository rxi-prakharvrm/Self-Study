#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // ofstream MyFile("first.cpp");
    // MyFile << "#include <iostream>\nusing namespace std;\n\nint main() {\n\n\treturn 0;\n}";

    string myText;
    fstream MyReadFile("first.cpp");
    while(getline(MyReadFile, myText)) {
        cout << myText;
    }

    // MyFile.close();

    MyReadFile.close();

    return 0;
}