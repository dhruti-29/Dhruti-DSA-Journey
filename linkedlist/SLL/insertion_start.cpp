#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node *next;

    node(int value){
        data = value;
        next = NULL;
    }

};
node *head = NULL;

void insertion(int value){
    node* newnode = new node(value);

    if(head==NULL){
        head = newnode;
    }

    else{
        newnode->next = head;
head = newnode;
    }
}


void display(){
    node *temp = head;
    while(temp!=NULL){
        cout<<"answer :  "<<temp->data<<endl;
        temp=temp->next;
    }
}
int main() {
    


insertion(10);
insertion(20);
insertion(30);

display();

    return 0;
}


/* temp = cuurent node addres
temp->data = cuuret node value 
temp->next = next node addres */