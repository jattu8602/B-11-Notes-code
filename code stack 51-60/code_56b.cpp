/*
DATA ENCAPSULATION
class faculty{
    int enrollNo;
    char name[10];
    char c;
    public:
    int salary;

}
The process of combining many  elements into a single entity is known as
data encapsulation .In classes we combine data members and member functions
together  is known as data encapsulation using excess 
specifiers {public, private , protected}.

Limits the accessibility of data member and member function.

This limited use or hiding data from other users is known as data abstraction.

*/
#include<iostream>
using namespace std;
class rect{
    private:
    int l=10,b=40;
    public:
    void area(){
        int a;
        a = l*b;
        cout<<"area is : "<<a;
    }

};

int main(){
    rect r;
    r.area();
    
    
    return 0;
}