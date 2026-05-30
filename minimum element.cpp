#include <iostream>
using namespace std;

int minfun(int a[] ,int min ,int n){

    if(n==0){
        return min;
    }

    if(min>a[n]){
        min =  a[n];
    }

    return minfun(a, min , n-1);
}

int main() {
    
     
    int s[5] = {2,4,5,1,9};
int mini = s[0];
    cout<<minfun(s,mini,4);
    return 0;
}
