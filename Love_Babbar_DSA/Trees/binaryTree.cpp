#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(NULL), right(NULL) {}
};

Node* buildTree(Node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1) {
        return NULL;
    }

    cout << "Enter the data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

int main() {
    Node* root = NULL;
    root = buildTree(root);
    return 0;
}