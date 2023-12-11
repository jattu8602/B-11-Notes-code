/*
                        2.>MULTI LEVEL INHERITENCE
    it has minimum total of 3 classes(one of them is a base class)
    which is inherited by first diverged class and a third class c inherit
    class b therefore by the object of class c we can excess public 
    member of class a and class b.

    A = base class
    B = derived class 1
    C  = derived class 2

*/
#include<iostream>
using namespace std;
class addition{
    public:
    void add(){int a  = 30;
    int b = 34;
cout<<"sum is :"<<a + b<<endl;
    }
    

};
class subtraction : public addition
{
    public:
void sub(){
    int x = 56, y = 35;
    cout<<"subtracton is :"<<x-y<<endl;

    
}};
class multiplication : public subtraction{
    public:
    void multi()
    {
        int m  = 34, n =56;
        cout<<"multiplication is :"<<m *n<<endl;
    }
};

int main(){
     multiplication m;
     m.add();
     m.multi();
     m.sub();



    return 0;
}