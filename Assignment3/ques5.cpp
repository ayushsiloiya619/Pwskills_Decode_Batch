#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cin>>side1>>side2>>side3;
    if(side1==side2||side1==side3){
        cout<<"equilateral"<<endl;
    }
    else if(side1==side2||side1==side3||side2==side3){
        cout<<"Isosceles"<<endl;
    }
    else{
        cout<<"scalene"<<endl;
    }
    return 0;
}
// 5 4 4
// Isosceles