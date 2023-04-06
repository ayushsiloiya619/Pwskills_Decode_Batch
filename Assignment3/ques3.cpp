#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%400==0){
        cout<<"It's leap year. "<<endl;
    }
    else if(year%100==0){
      cout<<"It's not a leap year. "<<endl;
    }
    else if(year%4==0){
      cout<<"It's leap year. "<<endl;
    }
    else{
        cout<<"Not a leap year"<<endl;
    }
    return 0;
}
//1976 It's a leap year.
//2003 Not a leap year.