#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int search(Node* head, int value, int index)
{
    if (head == NULL)
        return -1;

    if (head->data == value)
        return index;

    return search(head->next, value, index + 1);
}

int main()
{
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;

    first->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    int value;

    cout << "Enter value to search: ";
    cin >> value;

    int position = search(first, value, 0);

    if (position == -1)
        cout << "Value not found";
    else
        cout << "Value found at index " << position;

    return 0;
}
