#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    // TODO: create and return a new node with the given data
    Node* new_node = (*Node )
    return NULL;
}

void insertAtEnd(struct Node** head, int data) {
    // TODO: Insert a node with the given data to the end of the linked list
    Node* new_node = (struct Node*)malloc(sizeof(struct *Node));
    new_node -> data = new_data;
    new_node -> next = NULL;
}

struct Node *searchValue(struct Node *node, int data) {
    // TODO: return the node in the list with the value data
    return NULL;
}

void deleteNode(struct Node **head, int data) {
    // TODO: delete a node in the list with the same data
}

void reverseList(struct Node** head) {
    // TODO: reverse the linked list
}

void printList(struct Node* node) {
    // TODO: print out the linked list
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    printf("Linked List: ");
    printList(head);

    insertAtEnd(&head, 100);
    insertAtEnd(&head, 458);
    insertAtEnd(&head, 1738);

    printf("Linked List: ");
    printList(head);

    struct Node *fetty_wap = searchValue(head, 1738);
    printf("The fetty wap node: %d\n", fetty_wap->data);

    printf("Deleting 100...\n");
    deleteNode(&head, 100);
    printList(head);

    printf("Deleting 1...\n");
    deleteNode(&head, 1);
    printList(head);

    printf("Deleting 1337...\n");
    deleteNode(&head, 1337);
    printList(head);

    reverseList(&head);
    printList(head);

    return 0;
}