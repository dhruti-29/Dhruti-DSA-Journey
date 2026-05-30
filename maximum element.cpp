#include <iostream>
using namespace std;


int maxfun(int a[] ,int maxi ,int n){

if(n==0){
    return maxi;
}
if(maxi < a[n]){
   maxi = a[n];
}

return maxfun(a,maxi,n-1);


}
int main() {
    
    int s[5] = {2,4,5,1,9};
int max = s[0];
    cout<<maxfun(s,max,4);
    return 0;
}
