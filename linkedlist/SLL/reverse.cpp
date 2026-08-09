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
 node* temp = head;
    node * newnode = new node(value);
    if(head == NULL){
        head = newnode;
    }

    else{
while(temp->next != NULL){

    temp = temp->next;
}
temp->next = newnode;
newnode->next = NULL;

    }
}

void reverse(){

    node *next = NULL;
    node *prev = NULL;

    while(head!=NULL){
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
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

reverse();
display();

    return 0;
}
