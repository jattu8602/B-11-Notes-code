//to demonstrate the continue statement
#include<iostream>
using namespace std;
   
int main(){
    int i, number;
    i = 1;
    while (i<5)
    {
       cout<<"enter the number"<<endl;
       cin>>number;
       if (number>=5)
       {
        cout<<"the number is greater then or equal to five"<<endl;
        continue;
       }
       cout<<"the number is :"<<number<<endl;
       i++;
       
    }
    
    return 0;
}