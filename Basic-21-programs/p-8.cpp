//to demonstrate the break statement
#include<iostream>
using namespace std;
   
int main(){
    int i;
    i = 1;
    while (i<5)
    {
        cout<<"this is simple program "<<endl;
        cout<<"to test the break statement"<<endl;
        break;
        cout<<"control never comes here"<<endl;
        i++;
    }
    cout<<"this is the next statement after break";
    
    return 0;
}