//print a table using while loop
#include<iostream>
using namespace std;

int main(){
    int a;
    int s;
    cout<<"enter a number whose table you want"<<endl;
    cin>>a;
    // for (int i = 1; i < 11; i++)
    // {
    //     /* code */
    //     s= i*a;
    //     cout<<i<<"*"<<a<<"is:"<<s<<endl;
    // }
    int i = 1;

    while (i<=10)
    {
        /* code */
        s= i*a;
        cout<<i<<"*"<<a<<"is:"<<s<<endl;
        i++;

    }
    
    
    return 0;
}