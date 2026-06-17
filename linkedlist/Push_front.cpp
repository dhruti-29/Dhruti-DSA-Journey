#include <iostream>
using namespace std;


class node{
public:
int data;
node* next;

node (int val){
    data = val; // bcz last ma NULL hoi atle
next = NULL;
}
};

class list{
public:
    node* head = NULL; //varible declaration
    node* tail = NULL; //varible declaration

    void push_front(int val){
node* newnode = new node(val);
if(head==NULL){
    head = tail = newnode;
}

else{
    newnode->next = head;
    head = newnode;
}
    }

    void print(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main() {
   list l1;
   l1.push_front(10);
l1.print();
    return 0;
}
