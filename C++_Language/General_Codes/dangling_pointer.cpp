#include <iostream>
using namespace std;

int *getArrayOfSize(int n) {
    int arr[n] = {9};
    int *resultPtr = arr;
    return resultPtr;
}

int main() {
    int *arrPtr = getArrayOfSize(10);
    cout << arrPtr[4] << endl;
    return 0;
}