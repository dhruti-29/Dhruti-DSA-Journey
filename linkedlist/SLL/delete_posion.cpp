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


void delete_posion(){
int pos = 2;
    node* temp = head;

    pos--;
    while(pos!=1){
        temp = temp->next;
        pos--;
    }
node* ptr = temp->next;

temp->next = ptr->next;
delete ptr;
    

}


void display(){
    node *temp = head;
    while(temp!=NULL){
        cout<<"answer :  "<<temp->data<<endl;
        temp=temp->next;

    }
}
int main() {
    insertion(12);
         insertion(200);
      insertion(300);
  delete_posion();

  display();

    return 0;
}
