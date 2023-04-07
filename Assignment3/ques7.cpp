#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"It is at origin. "<<endl;
    }
    else if(x>0 && y==0){
        cout<<"It lies on x-axis. "<<endl;
    }
    else{
        cout<<"It lies on y-axis. "<<endl;
    }
    return 0;
}
// HARD CODE
// 2 0
// It lies on x-axis.