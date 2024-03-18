#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
    Node *head = NULL;

    public:
    bool searchNode(int);
};

bool LinkedList::searchNode(int target) {
    Node *temp = head;

    while(temp->next != NULL) {
        if(temp->data == target) {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

int main() {
    LinkedList LL;
    int target = 3;
    int ans = LL.searchNode(target);
    cout << ans;
    return 0;
}