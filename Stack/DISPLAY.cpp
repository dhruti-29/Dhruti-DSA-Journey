#include <iostream>
using namespace std;

int main() {
    int stack[5] = {10, 20, 30, 40, 50};
    int top = 4;

    if(top == -1){
        cout<<"underflow"<<endl;
    }

    else{
        cout<<"elements : "<<endl;

        for(int i=top;i>=0;i--){
            cout << stack[i] << " ";
        }
    }
    return 0;
}
