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

bool search(node* head ,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
 temp = temp->next;  
    }
return false;
}

int main() {
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    int key = 20;

    if(search(head ,key)){
        cout<<"element found"<<endl;
    }

    else{
        cout<<"not found";
    }
    
    return 0;
}
