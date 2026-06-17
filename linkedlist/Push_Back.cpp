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

class list{
node* head =NULL;
node* tail =NULL;

public:

void push_back(int val){
    node* newnode = new node(val);
    if(head==NULL){
        head=tail=newnode;

    }
    else{
        tail->next =newnode;
        tail = newnode;
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
    list l1,l2;
    l1.push_back(20);
    
    l1.print();
    l2.push_back(90);
    l2.print();
    return 0;
}
