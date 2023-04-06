#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3;
    cin>>m1>>m2>>m3;
    if(m1<m2 && m1<m3){
        cout<<"This is least "<<m1<<endl;
    }
    else if(m2<m1 && m2<m3){
        cout<<"This is least "<<m2<<endl;
    }
    else{
        cout<<"This is least "<<m3<<endl;
    }
    return 0;
}
//Mark's of students.
// 23 34 71
//23