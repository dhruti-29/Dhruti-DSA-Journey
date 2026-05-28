#include <iostream>
using namespace std;

int facto(int a){

    if(a==1 || a==0){
        return 1;
    }

    return facto(a-1) * a;
}
int main() {
    
    cout<<"answer :" <<facto(4);
    return 0;
}
