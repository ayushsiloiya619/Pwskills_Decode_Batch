#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='0' && ch<='9'){
        cout<<"digit"<<endl;
    }
    else if(ch<='Z' && ch>='A'|| ch>='a' && ch<='z'){
        cout<<"alphabet"<<endl;
    }
    else{
        cout<<"Special character."<<endl;
    }
    return 0;
}
//"9"
//digit.