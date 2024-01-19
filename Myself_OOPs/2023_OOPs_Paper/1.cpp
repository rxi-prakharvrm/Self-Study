#include <iostream>
using namespace std;

int* mySorting(int *p, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(p[i] > p[j]) {
                swap(p[i], p[j]);
            }
        }
    }
    return p;
}

void print(int *p, int size) {
    for(int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
}

int main() {
    int arr[] = {5, 3, 7, 2, 1};
    int *p = arr;
    int size = sizeof(arr)/sizeof(arr[0]);
    int *sorted = mySorting(p, size);
    print(sorted, size);
    return 0;
}