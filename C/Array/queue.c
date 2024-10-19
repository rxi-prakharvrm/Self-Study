#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// push
struct Node *push(struct Node *head, int val) {
    struct Node *newNode = (struct Node *) malloc (sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if(!head) {
        head = newNode;
    } else {
        struct Node *temp = head;
        while(temp->next) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    return head;
}

// pop
struct Node *pop(struct Node *head) {
    if(!head) {
        printf("No element to pop!\n");
    } else {
        struct Node *toDelete = head;
        head = head->next;
        free(toDelete);
    }

    return head;
}

// front
int front(struct Node *head) {
    if(!head) {
        return -1;
    }

    return head->data;
}

// size
int size(struct Node *head) {
    int count = 0;

    if(!head) {
        return 0;
    } else {
        struct Node *temp = head;
        while(temp) {
            temp = temp->next;
            count++;
        }
    }

    return count;
}

int main() {
    struct Node *head = NULL;

    // push
    head = push(head, 10);
    head = push(head, 20);
    head = push(head, 30);
    head = push(head, 40);
    head = push(head, 50);

    // pop
    head = pop(head);
    head = pop(head);

    // front
    int frontEle = front(head);

    // size
    int n = size(head);

    // print
    printf("Elements in stack ----------\n");
    struct Node *temp = head;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    printf("Front element is: %d\n", frontEle);
    printf("Size of the stack is: %d\n", n);

    return 0;
}