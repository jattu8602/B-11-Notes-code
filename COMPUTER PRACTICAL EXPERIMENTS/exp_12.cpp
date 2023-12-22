//wap to illustrate objects and classes
/*
Object Oriented Programming
*class
*object
*abstraction
*encapsulation
*inheritence
*polymorphism
*reusability

Classes
classes is collection of data members and member functions .
Data members are the variable assign inside a class.
Member functions are functions associated with the class which are defined in a class.

Class is a collection of properties of an object.
It is user defined type.

Obejct is a real world entity which belongs to a class and shares the data member 
function of the class.

*/
//syntax
#include<iostream>
using namespace std;
class student{//class
    string name;
    public:
    
    void getdata(){
        cout<<"enter your name:"<<endl;
        cin>>name;
    }
    void displaydata(){
        cout<<"hello "<<name<<endl;

    }
};

int main(){
    student s1,s2;//objects
    s1.getdata();
    s1.displaydata();
    s2.getdata();
    s2.displaydata();

    return 0;
}
