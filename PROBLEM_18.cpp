//18
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int countNodes(Node* head)
{
    int node = 0;
    Node* temp = head;
    while (temp != nullptr)
    {
        node++;
        temp = temp->next;
    }
    return node;
}

int main()
{
    Node* head = new Node{5, nullptr};
    head->next = new Node{15, nullptr};
    head->next->next = new Node{25, nullptr};

    int total = countNodes(head);
    cout<<total<<endl;

    return 0;
}