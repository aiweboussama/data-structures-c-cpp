#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertAtBeginning(struct Node **head, int value)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void displayList(struct Node *head)
{
    struct Node *current;

    current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

void freeList(struct Node *head)
{
    struct Node *current;
    struct Node *nextNode;

    current = head;
    while (current != NULL)
    {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
}

int main(void)
{
    struct Node *head;

    head = NULL;

    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);

    printf("Original list: ");
    displayList(head);

    insertAtBeginning(&head, 5);

    printf("After insertion: ");
    displayList(head);

    freeList(head);

    return 0;
}
