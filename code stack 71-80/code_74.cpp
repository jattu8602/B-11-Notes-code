/*
                            EXCESS SPECIFIERS
    1.>PRIVATE
    private belongs to a class which cannot be further used outside the class
    
    2.>PROTECTED MEMBERS
    protected members are use (accessed) by the base class as well as derived 
    class.They cannot be used outside the base class or derived class.
    
    3.>PUBLIC
    public member can be used anywhere within class or outside the class


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