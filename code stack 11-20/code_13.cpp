//wap a program to interchange values of two variable without using a new variable
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter value of a:"<<endl;
    cin>>a;
    cout<<"enter value of b:"<<endl;
    cin>>b;
    a = a+b;
    b=a-b;
    a=a-b;
    cout<<"now value of a is :"<<a<<endl;;
    cout<<"now value of b is :"<<b;
    return 0;
}