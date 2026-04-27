#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertAtBeginning(Node *&head, int value)
{
    Node *newNode;

    newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void displayList(Node *head)
{
    Node *current;

    current = head;
    while (current != NULL)
    {
        cout << current->data << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}

void freeList(Node *head)
{
    Node *current;
    Node *nextNode;

    current = head;
    while (current != NULL)
    {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

int main()
{
    Node *head;

    head = NULL;

    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);

    cout << "Original list: ";
    displayList(head);

    insertAtBeginning(head, 5);

    cout << "After insertion: ";
    displayList(head);

    freeList(head);

    return 0;
}
