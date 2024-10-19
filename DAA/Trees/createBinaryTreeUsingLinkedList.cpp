#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class Tree {
    public:

    // creating tree
    void createTree(Node *&);

    // pre order traversal
    void preOrder(Node *&);
    
    // inorder traversal
    void inOrder(Node *&);
    
    // post order traversal
    void postOrder(Node *&);

    // count total number of nodes
    int countNodes(Node *&);

    // count two child nodes
    int countTwoChildNodes(Node *&);

    // sum of nodes
    int sumOfNodes(Node *&);

    // number of levels in the tree
    int numOfLevels(Node *&);
};

void Tree::createTree(Node *&root) {
    Node *currentNode, *newNode;
    int x;
    queue<Node *> q;
    
    // Root node
    cout << "Enter root value: ";
    cin >> x;

    root = new Node(x);
    q.push(root);

    // if queue is empty, tree is created
    while(!q.empty()) {

        // dequeue
        currentNode = q.front();
        q.pop();

        // creating left child
        cout << "Enter left child value: ";
        cin >> x;

        if(x != -1) {
            newNode = new Node(x);
            currentNode->left = newNode;
            q.push(newNode);
        }

        // creating right child
        cout << "Enter right child value: ";
        cin >> x;

        if(x != -1) {
            newNode = new Node(x);
            currentNode->right = newNode;
            q.push(newNode);
        }
    }
}

// pre order traversal
void Tree::preOrder(Node *&root) {
    if(root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// inorder traversal
void Tree::inOrder(Node *&root) {
    if(root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

// post order traversal
void Tree::postOrder(Node *&root) {
    if(root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

// count nodes
int Tree::countNodes(Node *&root) {
    if(root == NULL) return 0;
    return countNodes(root->left) + countNodes(root->right) + 1;
}

// count nodes which have left and right child both
int Tree::countTwoChildNodes(Node *&root) {
    if(root == NULL) return 0;
    if(root->left != NULL && root->right != NULL) {
        return countTwoChildNodes(root->left) + countTwoChildNodes(root->right) + 1;
    } else {
        return countTwoChildNodes(root->left) + countTwoChildNodes(root->right);
    }
}

// sum of nodes
int Tree::sumOfNodes(Node *&root) {
    if(root == NULL) return 0;
    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
}

// number of levels
int Tree::numOfLevels(Node *&root) {
    int x, y;
    if(root == NULL) return 0;
    x = numOfLevels(root->left);
    y = numOfLevels(root->right);
    return (x > y) ? x + 1 : y + 1;
}

int main() {
    Node *root;
    Tree t;
    t.createTree(root);
    
    cout << endl << "Preorder: "; t.preOrder(root);
    cout << endl << "Inorder: "; t.inOrder(root);
    cout << endl << "Postorder: "; t.postOrder(root);

    cout << endl;

    cout << endl << "Total number of nodes in the tree is: " << t.countNodes(root);
    cout << endl << "Total number of nodes in the tree having two children is: " << t.countTwoChildNodes(root);
    cout << endl << "Sum of nodes: " << t.sumOfNodes(root);
    cout << endl << "Number of levels in the tree: " << t.numOfLevels(root);

    return 0;
}