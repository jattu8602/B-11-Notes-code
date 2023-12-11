//wap to calculate amongst 2 numbers
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two numbers:"<<endl;
    cin>>a;
    cin>>b;
    if(a>b){
        cout<<"fisrt number is greater"<<endl;
    }
    else if(a==b){
        cout<<"both given numbers are equal"<<endl;
    }
    else{
        cout<<"second number is greater"<<endl;
    }
    return 0;
}