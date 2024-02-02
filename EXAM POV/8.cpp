//constructor definition and example with syntax;
/*
constructor is a member function used to initalize data member of a class
 
key points:
1.constructor  is always declared at public region of a class 
2.constructor has a same name as class;;
3.constructor do not have return type but can have parameters
4.constructor invoke automatically at the time of object creation
5.a function can have more than one constructor that is constructor can be overloaded

IMP:we cannot assign direct value in object without using constructors
*/
#include<iostream>
using namespace std;
class rectangle{
    private:
    int l,b;
    public:
    rectangle()//costructor
    {l = 12;
    b= 56; }
    void area();
    
};
void rectangle :: area(){
int  area = l*b;
cout<<"area is :"<<area;
}

int main(){
    rectangle r1;
    r1.area();    
    return 0;
}