/*
                            TYPES OF INHERITANCE
    1.>SINGLE INHERITANCE
    2.>MULTI LEVEL INHERITENCE
    3.>MULTIPLE INHERITANCE
    4.>HEREHICAL INHERITANCE
    5.>HYBRID INHERITANCE                        
*/
/*
                           1.>SINGLE INHERITANCE
    it has only one parent class and one child class              
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
int main(){
    subtraction s;
    s.add();
    s.sub();
}
