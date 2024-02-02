// 3. simple pragram in c++ using if/else statement 

#include<iostream>
using namespace std;
   
int main(){
    int a, b;
    cout<<"enter first number:"<<endl;
    cin>>a;
    cout<<"enter second number:"<<endl;
    cin>>b;
    if(a>b){
        cout<<"subtraction of these two numbers is :"<<a-b<<endl;
    }
    else{
        cout<<"subtraction of these two numbers is :"<<b-a<<endl;
    }

    return 0;
}