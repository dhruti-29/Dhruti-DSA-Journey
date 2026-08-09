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

void remove_end(){
node* temp = head;
   
if(head == NULL){
    cout<<"empty";
}

else{
node* ptr = temp;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next = NULL;
    delete temp->next;

    
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
    
    insertion(100);
    insertion(200);
    insertion(3343);
    remove_end();
display();

    return 0;
}
