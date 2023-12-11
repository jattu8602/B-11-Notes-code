//write the program to print sum and average of an array which number are given by user.
#include<iostream>
using namespace std;

int main(){
    int i,a[10];
    int s = 0;

    cout<<"enter 10 numbers"<<endl;
    for(i = 0; i <10; i++){
        cin>>a[i];
        s = s + a[i];


    }
    cout<<"sum of age is :"<<s<<endl;
    cout<<"average is :"<<s/10;
    

    return 0;
}