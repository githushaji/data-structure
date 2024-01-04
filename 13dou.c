#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}


int countNodes(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
struct Node* insertFirst(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }
    newNode->next = head;
    head->prev = newNode;
    return newNode;
}
struct Node* insertAtPosition(struct Node* head, int value, int position) {
    struct Node* newNode = createNode(value);
    if (position <= 0) {
        return insertFirst(head, value);
    }

    struct Node* current = head;
    while (position > 1 && current != NULL) {
        position--;
        current = current->next;
    }

    if (current != NULL) {
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;
    }

    return head;
}
struct Node* deleteFirst(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }

    struct Node* newHead = head->next;
    free(head);
    if (newHead != NULL) {
        newHead->prev = NULL;
    }
    return newHead;
}

struct Node* deleteLast(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    if (current->prev != NULL) {
        current->prev->next = NULL;
        free(current);
    } else {
        // If there is only one node in the list
        free(current);
        head = NULL;
    }

    return head;
}
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    if (current->prev != NULL) {
        current->prev->next = NULL;
        free(current);
    } else {
        free(current);
        head = NULL;
    }

    return head;
}


struct Node* searchNode(struct Node* head, int value) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}
void traverseList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};


struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
struct Node* insertFirst(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }
    newNode->next = head;
    head->prev = newNode;
    return newNode;
}
struct Node* insertAtPosition(struct Node* head, int value, int position) {
    struct Node* newNode = createNode(value);
    if (position <= 0) {
        return insertFirst(head, value);
    }

    struct Node* current = head;
    while (position > 1 && current != NULL) {
        position--;
        current = current->next;
    }

    if (current != NULL) {
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;
    }

    return head;
}
struct Node* deleteFirst(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }

    struct Node* newHead = head->next;
    free(head);
    if (newHead != NULL) {
        newHead->prev = NULL;
    }
    return newHead;
}

struct Node* deleteLast(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    if (current->prev != NULL) {
        current->prev->next = NULL;
        free(current);
    } else {
        free(current);
        head = NULL;
    }

    return head;
}
struct Node* searchNode(struct Node* head, int value) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}
void traverseList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;

    // Creating a doubly linked list
    head = insertFirst(head, 10);
    head = insertFirst(head, 20);
    head = insertFirst(head, 30);

 
    printf("Number of nodes: %d\n", countNodes(head));


    head = insertAtPosition(head, 25, 2);

   
    head = deleteFirst(head);

    // Deleting a node from the last position
    head = deleteLast(head);

   
    int searchValue = 20;
    struct Node* searchResult = searchNode(head, searchValue);
    if (searchResult != NULL) {
        printf("Node with value %d found.\n", searchValue);
    } else {
        printf("Node with value %d not found.\n", searchValue);
    }

   
    printf("List elements: ");
    traverseList(head);

 
    freeList(head);

    return 0;
}


int main() {
    struct Node* head = NULL;

    // Creating a doubly linked list
    head = insertFirst(head, 10);
    head = insertFirst(head, 20);
    head = insertFirst(head, 30);

 
    printf("Number of nodes: %d\n", countNodes(head));


    head = insertAtPosition(head, 25, 2);

   
    head = deleteFirst(head);

    // Deleting a node from the last position
    head = deleteLast(head);

   
    int searchValue = 20;
    struct Node* searchResult = searchNode(head, searchValue);
    if (searchResult != NULL) {
        printf("Node with value %d found.\n", searchValue);
    } else {
        printf("Node with value %d not found.\n", searchValue);
    }

   
    printf("List elements: ");
    traverseList(head);

 
    freeList(head);

    return 0;
}


