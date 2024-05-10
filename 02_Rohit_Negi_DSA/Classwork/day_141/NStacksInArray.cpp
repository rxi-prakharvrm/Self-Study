#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int index;
    Node *next;

    Node(int x) {
        index = x;
        next = NULL;
    }
};

class NStack {
    public:
    int *arr; // original data
    Node **top; // top element's index
    stack<int> stk; // empty indexes

    NStack(int N, int S) {
        arr = new int[S];
        top = new Node *[N];

        for(int i = 0; i < N; i++) {
            top[i] = NULL;
        }

        for(int i = 0; i < S; i++) {
            stk.push(i);
        }
    }

    bool push(int x, int m) {
        if(stk.empty()) {
            return 0;
        }

        arr[stk.top()] = x;
        Node *temp = new Node(stk.top());
        temp->next = top[m-1];
        top[m-1] = temp;
        stk.pop();

        return 1;
    }

    bool pop(int m) {
        if(top[m-1] == NULL) {
            return -1;
        }

        int element = arr[top[m-1]->index];
        stk.push(top[m-1]->index);
        top[m-1] = top[m-1]->next;

        return element;
    }
};

int main() {
    
    return 0;
}