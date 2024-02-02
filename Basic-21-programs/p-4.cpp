//to calculate factorial of a given number using the for loop
#include<iostream>
using namespace std;
   
int main(){
    int n,i;
    long double factorial = 1;
    cout<<"enter the number whose factorial is required:"<<endl;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        factorial = factorial*i;
    }
    cout<<"factorial of "<<n<< "  =  "<<factorial<<endl;
    
    return 0;
}