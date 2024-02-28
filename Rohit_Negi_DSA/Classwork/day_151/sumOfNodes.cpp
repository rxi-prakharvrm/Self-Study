#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class LinkedList {
    public:
    Node *root = NULL;

    Node *createList();
    void preOrder(Node *);
    void inOrder(Node *);
    void postOrder(Node *);
    int sumOfNodes(Node *);
};

Node *LinkedList::createList() {
    int x;
    cin >> x;

    if(x == -1) {
        return NULL;
    }

    Node *newNode = new Node(x);
    newNode->left = createList();
    newNode->right = createList();
    return newNode;
}

void LinkedList::preOrder(Node *root) {
    if(root == NULL) {
        return;
    }

    cout << root->data << "->";
    preOrder(root->left);
    preOrder(root->right);
}

void LinkedList::inOrder(Node *root) {
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << "->";
    inOrder(root->right);
}

void LinkedList::postOrder(Node *root) {
    if(root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << "->";
}

int LinkedList::sumOfNodes(Node *root) {
    if(root == NULL) {
        return 0;
    }
    
    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}

int main() {
    LinkedList LL;
    LL.root = LL.createList();
    LL.preOrder(LL.root);
    // LL.inOrder(LL.root);
    // LL.postOrder(LL.root);
    cout << "NULL";
    int ans = LL.sumOfNodes(LL.root);
    cout << endl << "Sum of nodes: " << ans << endl;
    return 0;
}