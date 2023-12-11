//wap a program to interchange values of two variable using a new variable
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter value of a:"<<endl;
    cin>>a;
    cout<<"enter value of b:"<<endl;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"now value of a is :"<<a<<endl;;
    cout<<"now value of b is :"<<b;
    return 0;
}