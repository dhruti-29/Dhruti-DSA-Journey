#include <iostream>
using namespace std;

int sum(int n){

    if(n==0){return n%10;}
    
    return (n % 10) + sum(n/10);

}                                         

int main() {
    
    int num = 190654;
    cout<<sum(num);
    return 0;
}
