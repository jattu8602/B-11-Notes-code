/*
PARAMETERISED CONSTRUCTOR

those constructors which has parameters as input are parameterised constructors

*/
#include<iostream>
using namespace std;
class rectangle{
    private:
    int l,b;
    public:
    rectangle(int x,int y)//costructor
    {l =x;
    b= y; }
    void area();
    
};
void rectangle :: area(){
int  area = l*b;
cout<<"area is :"<<area<<endl;
}

int main(){
    rectangle r1(34,56);
    
    r1.area();    
    return 0;
}