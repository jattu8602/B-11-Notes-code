//class rectangle example
#include<iostream>
using namespace std;
class rectangle{
    private:
    int l,b;
    int x=10;
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
    int m=12,n=1;
    
    rectangle r1(m,n),r2( 23,40);
    
    r1.area();
    r2.area();    
    return 0;
}