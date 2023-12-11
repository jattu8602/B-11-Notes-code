//program to read and write an array
#include<iostream>
using namespace std;

int main(){
    int i,age[10];
    cout<<"enter 10 numbers"<<endl;
    for(i = 0; i <10; i++){
        cin>>age[i];

    }
    for ( i = 0; i < 10; i++)
    {
        /* code */
        cout<<"age is :"<<age[i]<<endl;
    }
    
    return 0;
}