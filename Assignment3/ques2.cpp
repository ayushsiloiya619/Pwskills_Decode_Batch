#include<iostream>
using namespace std;
int main(){
    int area,circum;
    int radius= 4;
    circum=2*3.14*radius;
    area=3.14*radius*radius;
    if(area>circum){
        cout<<"The area is greater than the circumference. "<<endl;
    }
    else{
        cout<<"The circumference is greater than the area. "<<endl;
    }
    return 0;
}
// Area is greater than the circumference.