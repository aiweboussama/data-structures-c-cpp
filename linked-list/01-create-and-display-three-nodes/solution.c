#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *node1;
    struct Node *node2;
    struct Node *node3;
    struct Node *current;

    node1 = (struct Node *)malloc(sizeof(struct Node));
    node2 = (struct Node *)malloc(sizeof(struct Node));
    node3 = (struct Node *)malloc(sizeof(struct Node));

    if (node1 == NULL || node2 == NULL || node3 == NULL)
    {
        printf("Memory allocation failed.\n");
        free(node1);
        free(node2);
        free(node3);
        return 1;
    }

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    printf("Linked list: ");

    current = node1;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");

    free(node1);
    free(node2);
    free(node3);

    return 0;
}
