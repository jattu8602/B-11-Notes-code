//calculate 4 subjects % and sum
#include<iostream>
using namespace std;

int main(){
    cout<<"for calculating four subject percentage and total marks"<<endl;
    float m1,m2,m3,m4;
    cout<<"enter 4 subjects marks :"<<endl;
    cin>>m1>>m2>>m3>>m4;
    cout<<"your percentage is :"<<(m1+m2+m3+m4)/4<<endl;;
    cout<<"total marks is :"<<m1+m2+m3+m4;
    
    return 0;
}