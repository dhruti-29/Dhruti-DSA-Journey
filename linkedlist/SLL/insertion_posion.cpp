#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node *head = NULL;

void insertion(int value)
{
    node *temp = head;

    int pos = 4;

    node *newnode = new node(value);

    pos--;

    while(pos != 1)
    {
        temp = temp->next;
        pos--;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

int main()
{
    return 0;
}