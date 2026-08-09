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
 
void  insertion_end(int value){

  node* newnode = new node(value);
if(head== NULL){
    head = newnode;
}

else{
node *temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
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

insertion_end(100000);
display();

    return 0;
}
