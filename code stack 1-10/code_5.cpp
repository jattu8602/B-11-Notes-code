//write an algorithm to calculate area of an given triangle
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"for calculating area of a trialge----->"<<endl;

    float a,b,c,s,A;
    cout<<"enter parameter of a:"<<endl;
    cin>>a;
    cout<<"enter parameter of b:"<<endl;
    cin>>b;
    cout<<"enter parameter of c:"<<endl;
    cin>>c;
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area of the triangle is:"<<A<<endl;



    return 0;
}