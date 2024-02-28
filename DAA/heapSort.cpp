#include <bits/stdc++.h>
using namespace std;

class heap {
    public:
    int arr[100];
    int size;

    heap() {
        arr[0] = INT_MIN;
        size = 0;
    }

    void insertElement(int val) {
        int index = size;
        arr[index] = val;
        size += 1;

        while(index > 1) {
            int parent = (index - 1) / 2;

            if(arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void printHeap(int n) {
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteElement() {
        if(size == 0) {
            cout << "Nothing to delete!" << endl;
            return;
        }

        int deleted = arr[0];
        arr[0] = arr[size-1];
        arr[size-1] = deleted;
        size--;

        // take root node to its correct position
        int i = 0;
        while(i < size) {
            int leftIndex = 2*i+1;
            int rightIndex = 2*i+2;

            if(leftIndex < size && arr[i] < arr[leftIndex]) {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }

            else if(rightIndex < size && arr[i] < arr[rightIndex]) {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }

            else {
                return;
            }
        }
    }
};

int main() {
    int arr[] = {5, 1, 6, 2, 3, -6, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    heap h;
    for(int i = 0; i < n; i++) {
        h.insertElement(arr[i]);
    }
    for(int i = 0; i < n; i++) {
        h.deleteElement();
        h.printHeap(n);
    }
    return 0;
}