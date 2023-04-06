#include<iostream>
using namespace std;
int main(){
    int l,b;
    cin>>l>>b;
    int peri;
    peri=2*(l+b);
    int area;
    area=l*b;
    if(area>peri){
        cout<<"The area of is greater than perimeter. "<<endl;
    }
    else{
        cout<<"The perimeter is than area of rectangle. "<<endl;
    }
    return 0;
}
// 5 7
// Area > Perimeter