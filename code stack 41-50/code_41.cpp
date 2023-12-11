//wap to print number of odd numbers in an array
#include<iostream>
using namespace std;

int main(){
    int i,A[10];

    cout<<"enter 10 numbers"<<endl;
    for ( i = 0; i < 10; i++)
    {cin>>A[i];}
    for ( i = 0; i < 10; i++)
    {if ((A[i]%2)!=0)
    {cout<<"odd number:"<<A[i]<<endl;
    }
    }
    
    return 0;
}