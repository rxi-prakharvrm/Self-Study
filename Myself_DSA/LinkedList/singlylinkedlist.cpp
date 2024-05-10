#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class SinglyLinkedList {
    Node* head;

    public:

    SinglyLinkedList() { head = NULL; }

    // Inserting node at the end of the list
    void insertAtEnd(int);

    // Inserting node at the beginning of the list
    void insertAtBeginning(int);

    // Inserting node at the specific position
    void insertAtPos(int, int);

    // Deletion at the end of the list
    void deleteFromEnd();

    // Delete from beginning of the list
    void deleteFromBeginning();

    // Delete from a specific position in the list
    void deleteFromPos(int);

    // Printing the list
    void printList();

    // void deleteNode(int);

    // nth node from the end of the list
    void nthNodeFromEnd(void);

    // reverse the list
    void reverseList(void);

};

void SinglyLinkedList::insertAtEnd(int data) {
    // Create a Node
    Node* newNode = new Node(data);

    // Check if the list is empty or not
    // if empty then link the new node to the head
    // else link the new node to the last node
    if(head == NULL) {
        head = newNode;
        return;
    }

    // Traverse till end of list
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Inserting the node at the beginning of the list
void SinglyLinkedList::insertAtBeginning(int data) {
    Node* newNode = new Node(data);

    if(head == NULL) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

// Inserting the node at the specific position
void SinglyLinkedList::insertAtPos(int data, int pos) {
    Node* newNode = new Node(data);
    Node* temp = head;
    Node* prev = NULL;
    int counter = 1;

    while(temp != NULL) {
        counter++;
        temp = temp->next;
    }

    temp = head;

    if(pos > counter || pos < 1) {
        cout << "Cannot add at position: " << pos << endl;
        exit(0);
    }

    // if(temp == NULL) {
    //     cout << "Can't add node at this position" << endl;
    //     return ;
    // }
    while(--pos!=0) {
        prev= temp;
        temp = temp->next;
    }
    if(pos==0 && prev==NULL){
        newNode->next = head;
        head =newNode;
    }
    else if(prev==NULL){
        insertAtEnd(data);
    }
    else{
        newNode->next = temp;
        prev->next = newNode;
    }
}

// Function to delete the node at the end of the list
void SinglyLinkedList::deleteFromEnd() {
    Node* temp = head;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    // deleting the last node
    delete temp->next;

    temp->next = NULL;
}

// Deleting the node from the beginning of the list
void SinglyLinkedList::deleteFromBeginning() {
    Node* temp = head;

    if(head == NULL) {
        cout << "No node to delete" << endl;
    }

    temp = head;
    head = temp->next;
    delete temp;
}

// Delete node from the specific position from the list
void SinglyLinkedList::deleteFromPos(int  pos) {
    Node* temp = head;
    if(pos == 1) {
        head = head->next;
        delete temp;
        return;
    }

    Node* prevNode = head;
    Node* currNode = prevNode->next;
    int counter = 2;
    int countNode = 1;

    while(temp->next != NULL) {
        temp = temp->next;
        countNode++;
    }

    if(head == NULL || pos < 1 || pos > countNode) {
        cout << "Can't delete from this position" << endl;
        exit(0);
    }

    while(counter < pos) {
        prevNode = prevNode->next;
        currNode = prevNode->next;
        counter++;
    }

    prevNode->next = currNode->next;
    delete currNode;
}

// Printing the list
void SinglyLinkedList::printList() {
    Node *temp = head;

    if(head == NULL) {
        cout << "Empty List!" << endl;
        return;
    }

    cout << "head->";
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
};

// nth node from the end of the list (size-n+1)th node from the start
void SinglyLinkedList::nthNodeFromEnd() {
    if(head == NULL) {
        cout << "List is empty!";
        return;
    }

    int n, size = 1;
    Node *temp1 = head;

    cout << "Enter the value of n: ";
    cin >> n;

    while(temp1->next != NULL) {
        temp1 = temp1->next;
        size++;
    }

    if(size < n) {
        cout << "Fewer number of nodes in the list!" << endl;
        return;
    }

    Node *temp2 = head;
    while((size-n+1) != 1) {
        temp2 = temp2->next;
        size--;
    }

    cout << n << "th element from the end of the list is: " << head->data << endl;
}

// Reverse list
void SinglyLinkedList::reverseList() {
    // Handling empty list and single node in the list
    if(head == NULL || head->next == NULL) {
        cout << "Nothing to reverse!" << endl;
        return;
    }

    // Handling two nodes in the list
    if(head->next->next == NULL) {
        Node *temp = head;
        head = temp->next;
        head->next = temp;
        temp->next = NULL;
        return;
    }

    // Handling three or more than three nodes
    Node *before, *current, *after;

    before = head;
    current = before->next;
    after = NULL;

    while(current != NULL) {
        if(before == head) {
            before->next = NULL;
        }
        current->next = before;
        before = current;
        current = after;
        if(after) after = after->next;
    }
    head = before;
}

// driver code
int main() {
    SinglyLinkedList LL;
    LL.insertAtEnd(1);
    LL.insertAtEnd(2);
    LL.insertAtEnd(3);
    LL.insertAtEnd(4);
    LL.insertAtEnd(5);

    // LL.insertAtBeginning(14);

    LL.insertAtPos(15, 6);
    // LL.insertAtPos(23, 7);

    // LL.deleteNode();

    // LL.deleteFromBeginning();

    LL.deleteFromPos(3);

    LL.printList();
    cout << endl;
    LL.reverseList();
    cout << endl;
    LL.printList();
    cout << endl;
    // LL.nthNodeFromEnd();
    return 0;
}