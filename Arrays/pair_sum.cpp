#include <iostream>
using namespace std;

int main() {
    
int a[] = {2,7,11,15};
int n = 4;
int i =0 ; int j = n-1;
    int target = 9;
while(i < j){

    if(a[i] + a[j] < target){
        i++;
    }
   else  if(a[i] + a[j] > target){
        j--;
    }
    else {
        cout<<"first : "<<a[i]<<" second: "<<a[j]<<endl;
        break;
    }
}
    return 0;
}
