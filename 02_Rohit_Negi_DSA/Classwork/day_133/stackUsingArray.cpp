#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int top;

    public:
    Stack(int n) {
        arr = new int[n];
        size = n;
        top = -1;
    }

    // push function
    void push(int value) {
        if(top == size-1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        top++;
        arr[top] = value;
        cout << "Element " << value << " is pushed successfully!" << endl;
    }

    // pop function
    void pop() {
        if(top == -1) {
            cout << "Stack is empty, Nothing can be popped!" << endl;
            return;
        }
        top--;
        cout << "Element " << arr[top + 1] << " is popped successfully!" << endl;
    }

    // peak function
    int peek() {
        if(top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    // isEmpty function
    bool isEmpty() {
        return top == -1;
    }

    // sizeIs function
    int sizeIs() {
        return top + 1;
    }
};

int main() {
    Stack S(5);
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(20);
    S.pop();
    S.pop();
    cout << S.peek() << endl;
    cout << S.sizeIs() << endl;
    S.pop();
    S.push(20);
    (S.isEmpty()) ? cout << "Stack is empty!\n" : cout << "Stack is not empty!\n";
    return 0;
}