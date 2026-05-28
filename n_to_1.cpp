#include <iostream>
using namespace std;

int call(int n){
    

    if(n==0){
        return 0;
    }
    cout<<n<<endl;
    return call(n-1);

}

int main() {
    
    call(5);
    return 0;
}
