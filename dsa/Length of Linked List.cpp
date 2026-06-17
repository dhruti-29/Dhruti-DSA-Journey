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
node* head = NULL;
//node* tail = NULL;

void countfun(){
    node* temp = head;
    int c = 0;
while(temp!=NULL){
    c++;
    temp = temp->next;
}

cout<<c;
}

int main() {
    
    head = new node(20);
    head->next = new node(30);

    countfun();
    return 0;
}
