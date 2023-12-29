//wap to implement constructor and destructor
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
    ~rectangle(){cout<<"bye bye"<<endl;}//destructor
    
};
void rectangle :: area(){
int  area = l*b;
cout<<"area is :"<<area<<endl;
   
}

int main(){
    rectangle r1;
    r1.area();    
    return 0;
}