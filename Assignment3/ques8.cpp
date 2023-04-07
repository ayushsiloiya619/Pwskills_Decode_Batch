#include<iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    float m1=(y2-y1)/(x2-x1);//floating points.
    float m2=(y3-y2)/(x3-x2);//floating points.
    if(m1==m2){
        cout<<"They lie on same line. "<<endl;
    }
    else{
        cout<<"They lie on dif. "<<endl;
    }
    return 0;
}
//1 2 2 3 3 4
//They lie on same line.
//Note to take float variables.