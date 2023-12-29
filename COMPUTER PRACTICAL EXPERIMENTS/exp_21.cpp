// wap to implement multiple inheritence

/*
                            3.>MULTIPLE INHERITANCE
        A -----
               |--------->C
        B -----         

      it has 2 or more seperate base classes which is inherited by the third class
    posses the property of first base class as well as second base class.              
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
class subtraction
{
    public:
void sub(){
    int x = 56, y = 35;
    cout<<"subtracton is :"<<x-y<<endl;

    
}};
class multiplication : public subtraction, public addition{
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