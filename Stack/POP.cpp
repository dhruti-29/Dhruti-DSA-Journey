#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = 4;


    if(top == -1){
        cout<<"underflow";
    }

    else{

        cout<<"DElte element : "<<stack[top];
        top--;
    }
    return 0;
}
