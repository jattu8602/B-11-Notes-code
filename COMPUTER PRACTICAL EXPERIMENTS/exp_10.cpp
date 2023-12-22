//wap to illustrate functions (implement the table generator)
#include<iostream>
using namespace std;


    void table();
    void table(){
         int a;
    int s =1;
    cout<<"enter a number whose table you want"<<endl;
    cin>>a;
    for (int i = 1; i < 11; i++)
    {
        /* code */
        s= i*a;
        cout<<i<<"*"<<a<<"is:"<<s<<endl;
    }
     }
    int main(){
        table();
        return 0;}
