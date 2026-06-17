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
public:
node* head = NULL;
node* tail = NULL;
node* prev = NULL;
node* next = NULL;
node* curr = head;

void push_back(int val){

    node* newnode = new node(val);

    if(head==NULL){
        head=tail=newnode;
    }

    else{
        tail->next = newnode;
        tail = newnode;
    }
}

void reverse(){
while(curr!=NULL){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;

}

 node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
        
    }
}
};




 int main() {



    list l1;
    int n,x;
    cout<<"how mant total value : ??";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"enter value :"<<endl;
        cin>>x;
        l1.push_back(x);
    }
    l1.reverse();
    //l1.print();

    return 0;
}

