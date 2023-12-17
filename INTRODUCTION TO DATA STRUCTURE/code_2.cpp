//wap to search an element in an given array
#include<iostream>
using namespace std;

int main(){
    cout<<"this is a program for item to be searched in an array  "<<endl;
    int a[3];
    int T;
    for (int i = 0; i <3; i++)
    {
    cout<<"FIRST ENTER DATA IN ARRAY"<<endl;

    cin>>a[i];

    }
    cout<<"item to be searched:"<<endl;
    cin>>T;
    int i;
    if (T==a[i]){
        cout<<"entered number is in array which is :"<<a[i]<<endl;


    }else{
    cout<<"there is no similarity anywhere:"<<endl;}
  return 0;
}