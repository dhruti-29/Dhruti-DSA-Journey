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

node* head = NULL;
node* tail = NULL;

public:

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


void pop_front(){
    if(head==NULL){
       // head = tail = val;
       cout<<"empty!!"<<endl;
    }

    else{
        node* temp = head;
        head = head->next;
        temp->next = NULL;
    }
}

void print(){
    node* temmp = head;
    while(temmp!=NULL){
        cout<<temmp->data<<" ";
        temmp = temmp->next;

    }
}
};
int main() {
    list l1;
     l1.push_front(20);
    l1.push_back(10);
l1.pop_front();
l1.print();
    return 0;
}
