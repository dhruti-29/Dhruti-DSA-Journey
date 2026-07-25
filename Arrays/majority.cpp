#include <iostream>
using namespace std;

int main() {
    

int a[] = {2,2,1,2};
int n = 4;
int i =0 ; int j = n-1;
int fre = 0;
int ans = 0 ;
  sort(a, a + n);
 for(int i=0;i<n;i++){
    if(a[i] == a[i+1]){
fre++;
    }
else{
    fre = 1;
    ans  = a[i];
}
if(fre > n/2){
    cout<<a[i]<<endl;
}


 }

    return 0;
}
