//wap to find wheather a number is between 5 and 500
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number:"<<endl;
    cin>>a;
    if (a>5 & a<500)
    {cout<<"given number is between 5 and 500"<<endl;

        /* code */
    }
    else if (a==5)
    {cout<<"given number is equal to 5"<<endl;
        /* code */
    }
    else if (a==500)
    {cout<<"given number is equal to 500"<<endl;
        /* code */
    }
    
    else{
        cout<<"given number is not between 5 and 500"<<endl;
    }
    
    return 0;
}