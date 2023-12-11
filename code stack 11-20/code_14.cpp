//wap to calculate volume and area of a room
// area = ((2 *l*b) + (2* b*h) + (2*h*l));
// volume = l*b*h;
#include<iostream>
using namespace std;

int main(){
    cout<<"for calculating volume and area of a room ---->>"<<endl;
    float l,b,h,area,volume;
    cout<<"write the value of length"<<endl;
    cin>>l;
    cout<<"write the value of breadth"<<endl;
    cin>>b;
    cout<<"write the value of height"<<endl;
    cin>>h;
    area = ((2 *l*b) + (2* b*h) + (2*h*l));
volume = l*b*h;
    cout<<"area is :::"<<area<<endl;
    cout<<"volume is :::"<<volume<<endl;
    
    return 0;
}