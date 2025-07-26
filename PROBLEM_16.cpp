//16
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void deleteFromBeginning(Node*& head)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteFromEnd(Node*& head)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void deleteFromPosition(Node*& head, int position)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }
    if (position == 1)
    {
        deleteFromBeginning(head);
        return;
    }

    Node* temp = head;
    for (int i = 1; temp != nullptr && i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr)
    {
        cout << "Invalid position\n";
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

void display(Node* head)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};

    cout << "Original list: ";
    display(head);

    deleteFromBeginning(head);
    cout << "After deleting from beginning: ";
    display(head);

    deleteFromEnd(head);
    cout << "After deleting from end: ";
    display(head);

    deleteFromPosition(head, 2);
    cout << "After deleting from position 2: ";
    display(head);

    return 0;
}