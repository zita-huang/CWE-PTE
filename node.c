#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    // TODO: create and return a new node with the given data
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> next = NULL;
    return temp;
}

void insertAtEnd(struct Node** head, int data) {
    // TODO: Insert a node with the given data to the end of the linked list
    struct Node* new_node = createNode(data);
    if(*head == NULL){
        *head = new_node;
        return;
    }

    struct Node* current = *head;
    while(current -> next != NULL){
        current = current -> next;
    }

    current -> next = new_node;
}

struct Node *searchValue(struct Node *node, int data) {
    // TODO: return the node in the list with the value data
    while(node != NULL){
        if(node -> data == data){
            return node;
        }
        node = node -> next;
    }
    return NULL;
}

void deleteNode(struct Node **head, int data) {
    // TODO: delete a node in the list with the same data
    struct Node *temp = *head, *prev = NULL;
    if(temp != NULL && temp -> data == data){
        *head = temp -> next;
        free(temp);
        return;
    }

    while(temp != NULL && temp -> data != data){
        prev = temp;
        temp = temp -> next;
    }

    if(temp == NULL){
        return;
    }

    prev -> next = temp -> next;
    free(temp);
    return;
}

void reverseList(struct Node** head) {
    // TODO: reverse the linked list
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void printList(struct Node* node) {
    // TODO: print out the linked list
    while(node != NULL){
        printf("%d -> ", node -> data);
        node = node -> next;
    }
    printf("NULL\n");
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

    printf("Reversing List ... \n");
    reverseList(&head);
    printList(head);

    return 0;
}