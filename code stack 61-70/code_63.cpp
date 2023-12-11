/*
DEFAULT CONSTRUCTOR
which do not have any parameter

*/
#include<iostream>
using namespace std;
class rectangle{
    private:
    int l,b;
    public:
    rectangle()//costructor
    {l = 12;
    b= 56; }
    void area();
    
};
void rectangle :: area(){
int  area = l*b;
cout<<"area is :"<<area;
}

int main(){
    rectangle r1;
    r1.area();    
    return 0;
}