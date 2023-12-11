/*
                            4.>HIRAREHICAL  INHERITANCE

                          
                   |------>C
            A------>
                   |------>B
                          |------->D           

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
class subtraction: public addition
{
    public:
void sub(){
    int x = 56, y = 35;
    cout<<"subtracton is :"<<x-y<<endl;

    
}};
class multiplication :public addition{
    public:
    void multi()
    {
        int m  = 34, n =56;
        cout<<"multiplication is :"<<m *n<<endl;
    }
};
class division:public subtraction{
    public:
    void div(){
        int p = 23,q = 89;
        cout<< "divison is :"<<p/q<<endl<<endl;
    }
};

int main(){
     multiplication m;
     m.add();
     m.multi();
     subtraction s;
     s.add();
     s.sub();
     division d;
     d.add();
     d.div();
     d.sub();



    return 0;
}