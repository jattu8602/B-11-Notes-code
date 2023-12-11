/*
                                INHERITANCE
    It is a powerful feature of oops .It is progress of getting property of
     one class into another.
                    Inheritance is deriving A into class B which inherits the 
    property of A ,"except private members".

                                SYNTAX
        class
        derived class name:access specifiers 
        base class:

    Inheritance is used to implement---->
    1.>reusability concept of oops
    2.>it safe times and reduces code redundency
    3.>it is less costly                            


child d : public p{
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
    void display(){
            cout<<"you have entered:"<<a<<endl<<b<<endl;
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