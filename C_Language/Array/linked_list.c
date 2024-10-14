#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *addNodeAtBeginning(struct ListNode *head, int val) {
    struct ListNode *newNode = (struct ListNode *) malloc (sizeof(struct ListNode));
    newNode->data = val;
    newNode->next = NULL;

    if(!head) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    
    return head;
}

struct ListNode *addNodeAtEnd(struct ListNode *head, int val) {
    struct ListNode *newNode = (struct ListNode*) malloc (sizeof(struct ListNode));
    newNode->data = val;
    newNode->next = NULL;

    if(!head) {
        head = newNode;
    } else {
        struct ListNode *temp = head;
        while(temp->next) {
            temp = temp->next;
        }

        temp->next = newNode;
    }    
    return head;
}

struct ListNode *deleteNodeFromBeginning(struct ListNode *head) {
    if(head) {
        struct ListNode *toDelete = head;
        head = head->next;
        free(toDelete);
    }

    return head;
}

struct ListNode *deleteNodeFromEnd(struct ListNode *head) {
    if(head) {
        struct ListNode *temp = head;

        while(temp->next && temp->next->next) {
            temp = temp->next;
        }

        struct ListNode *toDelete = temp->next;
        temp->next = NULL;

        free(toDelete);
    }
    return head;
}

int main(int argc, char* argv[]) {
    struct ListNode *head = NULL;

    // add node at the beginning of the list
    head = addNodeAtBeginning(head, 10);
    head = addNodeAtBeginning(head, 8);
    head = addNodeAtBeginning(head, 15);
    head = addNodeAtBeginning(head, 5);
    head = addNodeAtBeginning(head, 6);

    // add node at the end of the list
    head = addNodeAtEnd(head, 50);
    head = addNodeAtEnd(head, 5);
    head = addNodeAtEnd(head, 14);
    head = addNodeAtEnd(head, 15);
    head = addNodeAtEnd(head, 28);

    // delete node from the beginning of the list
    head = deleteNodeFromBeginning(head);

    // delete node from the end of the list
    head = deleteNodeFromEnd(head);

    // print the list
    struct ListNode *temp = head;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    return 0;
}