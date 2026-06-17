#include <iostream>
using namespace std;

class node{

public:

int data;
node* next;

node(int val){
data = val;
next = NULL;
}
};
 node* head = NULL;
    node* tail = NULL;
    
    
    void pback(int val){
     node* newnode = new node(val);
     if(head == NULL){
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print(){
    node* temp;
    temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
   

pback(5);
pback(10);
pback(15);

print();
    return 0;
}
