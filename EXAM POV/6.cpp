/*
6. inheritance

It is a powerful feature of oops.It is progress of getting property og one class into another.

Inheritance is deriving A into class B which inherits the property of A. "except private members".

Syntax
class derived class name: access specifiers
base class:

Inheritance is used to implement-------->
1. reusaability concept of oops
2. it safe times and reduces code redundency
3. it is less costly

*/ 
#include<iostream>
using namespace std;
class p{
    private:
    int a,b;
    public:
    void get(){
        cout<<"enter two numbers:"<<endl;
        cin>>a>>b;

    }
    void display (){
        cout<<"you have entered :"<<endl<<a<<endl<<b<<endl;
    }
};

class d : public p{
    public:
    int c,d;
    void cd(){
        c = 10;
        d = 40;
        cout<<c<<endl<<d;


    }

};
   
int main(){
    d d1;
    d1.get();
    d1.display();
    d1.cd();
    
    return 0;
}
