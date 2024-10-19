#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

class Stack {
    Node *top = NULL;

    public:
    // push
    void push(int data) {
        Node *newNode = new Node(data);
        if(!top) {
            top = newNode;
            return;
        }
        newNode->prev = top;
        top->next = newNode;
        top = newNode;
    }

    // pop
    void pop() {
        Node *temp = top;
        top = top->prev;
        if(top) {
            top->next = NULL;
        }
        delete temp;
    }

    // peek
    int peek() {
        return top->data;
    }

    // isEmpty
    bool isEmpty() {
        return top == NULL;
    }

    // sizeIs
    int sizeIs() {
        int count = 0;
        while(!this->isEmpty()) {
            count++;
            this->pop();
        }
        return count;
    }

    // print elements in LIFO
    void print() {
        while(!isEmpty()) {
            cout << top->data << " ";
            pop();
        }
    }
};

int main() {
    Stack S;
    
    // push
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);

    // pop
    S.pop();
    S.pop();

    // peek
    cout << S.peek() << endl;

    // empty
    cout << S.isEmpty() << endl;

    // sizeIs
    cout << S.sizeIs() << endl;

    // print
    // S.print();

    return 0;
}