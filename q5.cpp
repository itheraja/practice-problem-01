#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void display(Node* head)
{
    if (head == NULL)
        return;

    cout << head->data << " ";

    display(head->next);
}

int main()
{
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    cout << "Linked List: ";
    display(first);

    return 0;
}
