/*               INTRODUCTION TO DATA STRUCTURE

data structure is organisation of data as a structured format for storage,
retreval,shorting ,arrranging ,and managing data..

                    OPERATIONS IN DS-
1.> TRAVERSING
    reaching each and every element of data is known as traversing.

2.> INSERTION
        





*/
// TRAVERSING EXAMPLE
#include<iostream>
using namespace std;

int main(){
    int a[10];
    cout<<"enter 10 values:"<<endl;
    for (int  i = 0; i <=9; i++)
    {cin>>a[i];
     a[i]=a[i]+2;}
    cout<<"traveresed value with increment of 2 are :"<<endl;
    for(int  i = 0; i <=9; i++)
    {
        cout<<a[i]<<endl;}
    
    return 0;
}
