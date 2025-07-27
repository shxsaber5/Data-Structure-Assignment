
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void insert_at_begining(Node*& head, int data)
{
    Node* newNode = new Node{data, head};
    head = newNode;
}

void insert_at_position(Node*& head, int data, int position)
{
    if (position <= 1)
    {
        insert_at_begining(head, data);
        return;
    }

    Node* current = head;
    for (int i = 1; i < position - 1 && current; ++i)
    {
        current = current->next;
    }

    if (!current)
    {
        cout << "Position out of bounds.\n";
        return;
    }

    Node* newNode = new Node{data, current->next};
    current->next = newNode;
}

void insert_at_end(Node*& head, int data)
{
    Node* newNode = new Node{data, nullptr};
    if (!head)
    {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next)
    {
        current = current->next;
    }

    current->next = newNode;
}

void display(Node* head)
{
    Node* current = head;
    while (current)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL\n";
}

int main()
{
    Node* head = nullptr;

    cout << "First time linked list: ";
    display(head);

    insert_at_begining(head, 10);
    cout << "After insert at beginning: ";
    display(head);

    insert_at_begining(head, 5);
    cout << "After insert at beginning: ";
    display(head);

    insert_at_end(head, 20);
    cout << "After insert at end: ";
    display(head);

    insert_at_position(head, 15, 3);
    cout << "After insert at position 3: ";
    display(head);

    return 0;
}
