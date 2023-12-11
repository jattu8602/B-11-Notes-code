//wap to calculate volume of a sphere
//V=(2*pi*r*r*r)/3
#include<iostream>
using namespace std;

int main(){
    cout<<"for calculation of volume of a sphere: "<<endl;

    float r,pi=3.141,V;
    cout<<"enter radius of sphere:"<<endl;
    cin>>r;
    V=(2*pi*r*r*r)/3;
    cout<<"volume is :"<<V<<endl;

    return 0;
}