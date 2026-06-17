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

    if(head == NULL){
        head = tail = newnode;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
}

void print(){
    node* temmp = head;

    while(temmp != NULL){
        cout << temmp->data << " ";
        temmp = temmp->next;
    }
    cout << endl;
}

void pop_back(){
    if(head == NULL) return;

    if(head == tail){
        delete head;
        head = tail = NULL;
        return;
    }

    node* temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }

    temp->next = NULL;
    delete tail;
    tail = temp;
}
};

int main(){
    list l1;

    l1.push_front(200);
    l1.push_front(100);
    l1.push_front(50);

    l1.print();   // 50 100 200

    l1.pop_back();
    l1.print();   // 50 100

    return 0;
}