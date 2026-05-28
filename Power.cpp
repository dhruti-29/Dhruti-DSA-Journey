#include <iostream>
using namespace std;
// 2 * 2 * 2
int power(int n,int p){

if(p==0){
    return 1;
}

return power(n, p-1) * n;

}
int main() {
    cout<<"ans : "<<power(3 , 2);
    return 0;
}
