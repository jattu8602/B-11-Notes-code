//write a program to type your name and age you can vote or not
#include<iostream>
using namespace std;

int main(){
    int age;

    cout<<"enter your age :"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"congratulations you can vote :)";

    }
    else{
        cout<<"sorry! -_- you cannot vote ";
    }

    return 0;
}