#include <iostream>
using namespace std;

bool palli(string s, int start , int end){

    if(start>=end){
        return true;
    }

    if(s[start]!=s[end]){ 
        return false;
}

return palli(s,start + 1 ,end -1);
}
int main() {
    string b = "abcdcba";
if(palli(b ,0, b.length() - 1)){
    cout<<"yes"<<endl;
}

else{
    cout<<"false"<<endl;
}

    return 0;
}
