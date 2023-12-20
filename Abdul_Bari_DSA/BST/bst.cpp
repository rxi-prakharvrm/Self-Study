#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class BST {
public:
    Node *root = NULL;

    Node *search(Node *t, int key) {
        if (t == NULL) return NULL;
        if (key == t->data) return t;
        else if (key < t->data) return search(t->left, key);
        else return search(t->right, key);
    }

    void insert(Node *&t, int key) {
        if (t == NULL) {
            t = new Node(key);
            return;
        }

        Node *r = NULL, *p;
        while (t != NULL) {
            r = t;
            if (key == t->data) return;
            else if (key < t->data) t = t->left;
            else t = t->right;
        }
        p = new Node(key);
        p->left = p->right = NULL;
        if (p->data < r->data) r->left = p;
        else r->right = p;
    }
};

int main() {
    BST bst;
    bst.insert(bst.root, 1);
    bst.insert(bst.root, 2);
    bst.insert(bst.root, 3);
    bst.insert(bst.root, 4);
    bst.insert(bst.root, 5);

    Node *result = bst.search(bst.root, 3);
    if (result != NULL) {
        cout << "Node found with value: " << result->data << endl;
    } else {
        cout << "Node not found." << endl;
    }

    return 0;
}