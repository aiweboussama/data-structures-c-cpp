#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *node1;
    Node *node2;
    Node *node3;
    Node *current;

    node1 = new Node;
    node2 = new Node;
    node3 = new Node;

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    cout << "Linked list: ";

    current = node1;
    while (current != NULL)
    {
        cout << current->data << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;

    delete node1;
    delete node2;
    delete node3;

    return 0;
}
