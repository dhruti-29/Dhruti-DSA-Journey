#include <iostream>
using namespace std;



int main() {
    int stack[5];
    int top = -1;
    int value;
     
    cout<<"enter value : "<<endl;
    cin>>value;

    if(top == 4){
        cout<<"overflow"<<endl;
    }

    else {
        top++;
        stack[top] = value;
        cout<<"Element inserted successfully ";
    }



    return 0;
}
