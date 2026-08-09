#include <iostream>
using namespace std;


class node{

public:
int data;
 node *next = NULL;

node(int val){
    data = val;

}

};

node *head = NULL;

void insertion(int value){
 node* newnode = new node(value);
    node *temp = head;
     if(head==NULL){
        head = newnode;
    }

    else{

        newnode->next = head;
head = newnode;
    }
};
void remove_start(){

   node *temp = head;
   if(head == NULL){
    cout<<"empty"<<endl;
   }

   else{
    head = head->next;
    free(temp);

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
    insertion(200);
    insertion(30);
   remove_start();

   display();
    return 0;
}
