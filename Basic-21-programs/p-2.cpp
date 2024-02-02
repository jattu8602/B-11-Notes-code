//to check wheather the given number is odd or even using if-else statement
#include<iostream>
using namespace std;
   
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"given number is an even number"<<endl;

    }
    else{
        cout<<"given number is an odd number"<<endl;
        
    }
    return 0;
}