//to check wheather a number is odd or even (with function)
#include<iostream>
using namespace std;
void num(int);

int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    num(n);
    return 0;
}
void num(int a){
    if (a%2==0)
    {cout<<"given number is even";
        /* code */
    }
    else{
        cout<<"given number is odd";
    }
    
    
}

