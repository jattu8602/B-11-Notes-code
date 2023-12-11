//wap that a number is greater than 100 or not;
#include<iostream>
using namespace std;

int main(){
    int a ,b=100;
    cout<<"enter a number:"<<endl;
    cin>>a;
    if (a>=b)
    {cout<<"your number is greater than or equal to 100"<<endl;
        /* code */
    }
    else if(a==b)
    {cout<<"your number is equal to 100"<<endl;
        /* code */
    }
    else{
        cout<<"your number is less than 100"<<endl;
    }
    
    return 0;
}