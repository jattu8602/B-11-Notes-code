/*
            WHAT IS FRIEND FUNCTION?
    It allows to use private and protected members of a class outside a class.
    The compiler knows a given function is friend function by using keyword 
    friend in front of function decleration friend function can be declared 
    inside private or public area of a class.

    Friend function does not require scope resolution operator for function
 definition outside the class.

 Function decleration should be inside the class. The parameter of friend 
 function is object of class or classes.

 (.) Operator is not required to access friend function outside the class.


*/
//FIREND FUNCTION FOR A SINGLE CLASS

#include<iostream>
using namespace std;
class circle{
    public:
    int r;
    circle(){
        cout<<"enter radius:"<<endl;
        cin>>r;
        
    }
    friend int area(circle);
};
int area(circle ob){
    float a;
    a = 3.14*ob.r*ob.r;
    cout<<"area of circle is :"<<a;
    return 0;
}

int main(){
    circle c;
    area(c);
    return 0;
}